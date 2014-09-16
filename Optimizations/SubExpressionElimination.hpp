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

		cs6300::printBasicBlock(block);

		for(int i = 0; i < block->instructions.size(); i++){
			cs6300::ThreeAddressInstruction inst = block->instructions.at(i);

			// if values already mapped, rewrite instruction
			if(rewrites[inst.src1]){
				inst.src1 = rewrites[inst.src1];
			}

			if(rewrites[inst.src2]){
				inst.src2 = rewrites[inst.src2];
			}

			// reset instruction
			block->instructions.at(i) = inst;
			// generate key
			std::string key = std::to_string(inst.op) + std::to_string(inst.src1) + std::to_string(inst.src2);

			if(expressions[key]){
				rewrites[inst.dest] = expressions[key];
				// queue for deletion
				toDelete.push_back(i);
			}else{
				expressions[key] = inst.dest;
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

		cs6300::printBasicBlock(block);

		std::cout << std::endl;
	}

}

#endif