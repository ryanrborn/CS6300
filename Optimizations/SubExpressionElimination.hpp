#ifndef CS6300_SUBEXPRESSIONELIMINATION_HPP
#define CS6300_SUBEXPRESSIONELIMINATION_HPP

#include "../AST_INC/AST/BasicBlock.hpp"
#include "../AST_INC/AST/ThreeAddressInstruction.hpp"
#include "../AST_INC/AST/Expressions/AdditionExpression.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

namespace cs6300{

	void subExpressionElimination(std::shared_ptr<cs6300::BasicBlock> block){
		std::map<std::string, int> expressions;
		std::map<int, int> rewrites;
		std::vector<int> toDelete;

		std::cout << "before: " << block->instructions.size() << std::endl;

		block->printInsts();

		for(int i = 0; i < block->instructions.size(); i++){
			cs6300::ThreeAddressInstruction inst = block->instructions.at(i);

			// since the syntax for storing memory is flipped, we'll need to flip the rewrites
			if(inst.getOp() == ThreeAddressInstruction::StoreMemory){
				if(rewrites[inst.getDest()]){
					inst.setDest(rewrites[inst.getDest()]);
				}
			}else{
				// if values already mapped, rewrite instruction
				if(rewrites[inst.getSrc1()]){
					inst.setSrc1(rewrites[inst.getSrc1()]);
				}
				if(rewrites[inst.getSrc2()]){
					inst.setSrc2(rewrites[inst.getSrc2()]);
				}
			}

			// reset instruction
			block->instructions.at(i) = inst;

			std::string key;
			if(inst.getOp() == ThreeAddressInstruction::StoreMemory){
				key = std::to_string(inst.getOp()) + std::to_string(inst.getDest()) + std::to_string(inst.getSrc1());
			}else{
				key = std::to_string(inst.getOp()) + std::to_string(inst.getSrc1()) + std::to_string(inst.getSrc2());
			}

			if(expressions[key]){
				rewrites[inst.getDest()] = expressions[key];
				// queue for deletion
				toDelete.push_back(i);
			}else{
				expressions[key] = inst.getDest();
			}
		}

		// we need to sort instructions to delete
		std::sort(toDelete.rbegin(), toDelete.rend());

		// now to delete...
		for(auto i : toDelete){
			block->instructions.erase(block->instructions.begin()+i);
		}

		// follow branch and jump paths
		std::cout << "after: " << block->instructions.size() << std::endl;

		block->printInsts();

		std::cout << std::endl;
	}

}

#endif