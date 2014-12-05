#include "../../AST_INC/AST/BasicBlock.hpp"
#include "../../AST_INC/AST/ThreeAddressInstruction.hpp"
#include "../Algorithm.hpp"
#include "../VisitedBlocks.hpp"
#include "RegisterAllocation.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>


void cs6300::RegisterAllocation::execute(std::shared_ptr<BasicBlock> block){
	// we're not using the traverse blocks algorithm so
	// you're on your own as far as traversing the graph

	// okay, it's going to be a depth-first traversal,
	// looping until it's settled
	// there shouldn't be any live variables left on the top
	auto vb = VisitedBlocks::instance();
	// first we build our map
	while(madeChanges){
		madeChanges = false;
		vb->reset();
		traverse(block, true);
	}
	// build CFG
	buildCFG();

	// find new assignments
	findAssignments();

	vb->reset();
	// now we reassign the registers
	traverse(block, false);
}

void cs6300::RegisterAllocation::traverse(std::shared_ptr<BasicBlock> block, bool build){
	auto vb = VisitedBlocks::instance();
	if(vb->isVisited(block)){
		return;
	}
	if(block->branchTo != nullptr){
		traverse(block->branchTo, build);
	}
	if(block->jumpTo != nullptr){
		traverse(block->jumpTo, build);
	}

	if(build){
		buildMap(block);
	}else{
		reassignRegisters(block);
	}
}

void cs6300::RegisterAllocation::buildMap(std::shared_ptr<BasicBlock> block){
	// iterate backwards over each three address instruction
	// putting the appropriate information into our map
	std::string baseSig = getBlockSig(block);
	for(int i = block->instructions.size()-1; i >= 0; i--){
		cs6300::ThreeAddressInstruction inst = block->instructions.at(i);
		std::string sig = baseSig+"-"+std::to_string(i);

		// get current live vector for current instruction
		std::vector<int> live;
		if(liveness.find(sig) != liveness.end()){
			live = liveness[sig];
		}

		// get kill register in instruction
		int kill = inst.getDest();

		// get live registers of previous (next... really) instruction
		std::vector<int> prevLive;
		if(i == block->instructions.size()-1){
			// get instruction of other block(s)
			if(block->branchTo != nullptr){
				std::string branchSig = getBlockSig(block->branchTo);
				prevLive = liveness[branchSig+"-0"];
			}
			if(block->jumpTo != nullptr){
				std::string jumpSig = getBlockSig(block->jumpTo);
				for(int reg : liveness[jumpSig+"-0"]){
					if(std::find(prevLive.begin(), prevLive.end(), reg) == live.end()){
						prevLive.push_back(reg);
					}
				}
			}
		}else{
			// get instruction of previous 'i'
			prevLive = liveness[baseSig+std::to_string(i+1)];
		}

		// add previous liveness to current liveness
		for(int reg : prevLive){
			if(reg != kill && std::find(live.begin(), live.end(), reg) == live.end()){
				live.push_back(reg);
				madeChanges = true;
			}
		}

		// now add current liveness
		if(
			inst.getOp() != cs6300::ThreeAddressInstruction::LoadValue &&
			inst.getOp() != cs6300::ThreeAddressInstruction::LoadMemory &&
			inst.getOp() != cs6300::ThreeAddressInstruction::LoadMemoryOffset &&
			inst.getOp() != cs6300::ThreeAddressInstruction::LoadLabel &&
			inst.getOp() != cs6300::ThreeAddressInstruction::ReadChar &&
			inst.getOp() != cs6300::ThreeAddressInstruction::ReadInt &&
			inst.getOp() != cs6300::ThreeAddressInstruction::Stop &&
			inst.getOp() != cs6300::ThreeAddressInstruction::StoreMemory &&
			inst.getOp() != cs6300::ThreeAddressInstruction::WriteStr
		){
			// see if src1 is a live register
			if(inst.getSrc1() != kill && std::find(live.begin(), live.end(), inst.getSrc1()) == live.end()){
				live.push_back(inst.getSrc1());
				madeChanges = true;
			}

			if(
				inst.getOp() != cs6300::ThreeAddressInstruction::AddValue &&
				inst.getOp() != cs6300::ThreeAddressInstruction::WriteBool &&
				inst.getOp() != cs6300::ThreeAddressInstruction::WriteChar &&
				inst.getOp() != cs6300::ThreeAddressInstruction::WriteInt &&
				inst.getOp() != cs6300::ThreeAddressInstruction::WriteStr
			){
				// the remaining operations will use src2 as a register
				if(inst.getOp() != kill && std::find(live.begin(), live.end(), inst.getSrc2()) == live.end()){
					live.push_back(inst.getSrc2());
					madeChanges = true;
				}
			}
		}

		// if(inst.getOp() == cs6300::ThreeAddressInstruction::LoadMemoryOffset){
		// 	std::cout << inst.toString() << "    \t";
		// 	for(int j : live){
		// 		std::cout << j << ",";
		// 	}
		// 	std::cout << std::endl;
		// }

		liveness[sig] = live;
	}
}

void cs6300::RegisterAllocation::buildCFG(){
	std::vector<std::shared_ptr<RegCFG>> liveWith;
	for(auto it = liveness.begin(); it != liveness.end(); it++){
		liveWith.clear();
		for(int reg : it->second){
			auto index = findRegCFG(reg);
			if(index == -1){
				auto regObj = std::shared_ptr<RegCFG>(new RegCFG(reg));
				liveWith.push_back(regObj);
				cfg.push_back(regObj);
			}else{
				liveWith.push_back(cfg[index]);
			}
		}
		// I know that this is not optimized, but oh well, it works
		for(auto i : liveWith){
			for(auto j : liveWith){
				if(i != j && std::find(i->liveWith.begin(), i->liveWith.end(), j) == i->liveWith.end()){
					i->liveWith.push_back(j);
				}
			}
		}
	}
	// sort cfg vector by liveWith size
	std::sort(cfg.begin(), cfg.end());
}

void cs6300::RegisterAllocation::findAssignments(){
	for(auto it : cfg){
		int i = 8;
		while(std::find(it->cantBe.begin(), it->cantBe.end(), i) != it->cantBe.end()){
			i++;
		}
		registerMap[it->name] = i;
		for(auto jt : it->liveWith){
			if(std::find(jt->cantBe.begin(),jt->cantBe.end(), i) == jt->cantBe.end()){
				jt->cantBe.push_back(i);
			}
		}
	}
	// for(auto it = registerMap.begin(); it != registerMap.end(); it++){
	// 	std::cout << it->first << " -> " << it->second << std::endl;
	// }
}

void cs6300::RegisterAllocation::reassignRegisters(std::shared_ptr<BasicBlock> block){
	// reassign them.
	for(int i = 0; i < block->instructions.size(); i++){
		// std::cout << "before:" << std::endl << block->instructions[i].toString() << std::endl;
		if(
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::LoadValue &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::LoadMemoryOffset &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::WriteStr &&
			registerMap[block->instructions[i].getSrc1()]
		){
			block->instructions[i].setSrc1(registerMap[block->instructions[i].getSrc1()]);
		}
		if(
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::AddValue &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::WriteBool &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::WriteChar &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::WriteInt &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::WriteStr &&
			block->instructions[i].getOp() != cs6300::ThreeAddressInstruction::LoadMemoryOffset &&
			registerMap[block->instructions[i].getSrc2()]
		){
			block->instructions[i].setSrc2(registerMap[block->instructions[i].getSrc2()]);
		}
		if(registerMap[block->instructions[i].getDest()]){
			block->instructions[i].setDest(registerMap[block->instructions[i].getDest()]);
		}
		// std::cout << "after:" << std::endl << block->instructions[i].toString() << std::endl << std::endl;
	}
}

std::string cs6300::RegisterAllocation::getBlockSig(std::shared_ptr<BasicBlock> block){
	std::ostringstream stream;
	stream << block;
	return stream.str();
}

int cs6300::RegisterAllocation::findRegCFG(int reg){
	for(int i = 0; i < cfg.size(); i++){
		if(cfg[i]->name == reg){
			return i;
		}
	}
	return -1;
}