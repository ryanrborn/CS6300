#ifndef CS6300_TRAVERSEBLOCKS_HPP
#define CS6300_TRAVERSEBLOCKS_HPP

#include "../AST_INC/AST/BasicBlock.hpp"
#include "../AST_INC/AST/ThreeAddressInstruction.hpp"
#include "../AST_INC/AST/Expressions/AdditionExpression.hpp"
#include "Algorithm.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

namespace cs6300{
	/**
	 * traverseBlocks
	 * @param BasicBlock*			the basic block to traverse
	 * @param cs6300::Algorithm 	the algorithm to execute on each basic block
	 */
	void traverseBlocks(std::shared_ptr<cs6300::BasicBlock> block, std::shared_ptr<cs6300::Algorithm> algo){
		std::cout << block->visited << std::endl;
		if(block->visited){
			std::cout << "block visited" << std::endl;
			return;
		}
		block->visited = true;
		algo->execute(block);
		if(block->branchTo != nullptr){
			traverseBlocks(block->branchTo, algo);
		}
		if(block->jumpTo != nullptr){
			traverseBlocks(block->jumpTo, algo);
		}
	}

	void resetVisits(std::shared_ptr<cs6300::BasicBlock> block){
		std::cout << "reseting visit" << std::endl;
		block->visited = false;
		if(block->branchTo != nullptr){
			resetVisits(block->branchTo);
		}
		if(block->jumpTo != nullptr){
			resetVisits(block->jumpTo);
		}
	}
}

#endif