#ifndef CS6300_MAXIMIZEBLOCKS_HPP
#define CS6300_MAXIMIZEBLOCKS_HPP

#include "../../AST_INC/AST/BasicBlock.hpp"
#include "../Algorithm.hpp"

#include <iostream>

namespace cs6300 {
	class MaximizeBlocks : public Algorithm {
	public:
		void execute(std::shared_ptr<BasicBlock> block){
			// TODO: I should be able to do this in a loop somehow...
			// make bigger blocks :)
			if(block->branchTo == nullptr){
				std::cout << "branchTo is null" << std::endl;
				if(block->jumpTo != nullptr){
					std::cout << "jumpTo is NOT null, copying child" << std::endl;
					// we only have one successor, so we can copy our successor into ourselves...
					for(auto i : block->jumpTo->instructions){
						block->instructions.push_back(i);
					}
					block->branchTo = block->jumpTo->branchTo;
					block->jumpTo = block->jumpTo->jumpTo;
				}
			}else{
				std::cout << "branchTo is NOT null" << std::endl;
				if(isEmpty(block->branchTo)){
					std::cout << "branchTo is empty so copy child" << std::endl;
					// branchTo has no instructions, so we can have our branchTo be it's jumpTo
					// since it won't have a branchTo (at least it shouldn't)
					if(block->branchTo->jumpTo != nullptr){
						block->branchTo = block->branchTo->jumpTo;
					}else{
						block->branchTo = nullptr;
					}
				}
				if(isEmpty(block->jumpTo)){
					std::cout << "jumpTo is empty so copy child" << std::endl;
					// jumpTo has no instructions, so we can have our jumpTo be it's jumpTo
					// since it won't have a branchTo (at least it shouldn't)
					if(block->jumpTo->jumpTo != nullptr){
						block->jumpTo = block->jumpTo->jumpTo;
					}else{
						block->jumpTo = nullptr;
					}
				}
			}
			std::cout << std::endl;
		}
	private:
		bool isEmpty(std::shared_ptr<BasicBlock> block){
			return block->instructions.size() == 0;
		}
	};
}

#endif