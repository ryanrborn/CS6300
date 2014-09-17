#ifndef CS6300_MAXIMIZEBLOCKS_HPP
#define CS6300_MAXIMIZEBLOCKS_HPP

#include "../../AST_INC/AST/BasicBlock.hpp"
#include "../Algorithm.hpp"

#include <iostream>

namespace cs6300 {
	class MaximizeBlocks : public Algorithm {
	public:
		void execute(std::shared_ptr<BasicBlock> block){
			// make bigger blocks :)
			if(block->branchTo == nullptr){
				if(block->jumpTo != nullptr){
					// we only have one successor, so we can copy our successor into ourselves...
					for(auto i : block->jumpTo->instructions){
						block->instructions.push_back(i);
					}
					block->branchTo = block->jumpTo->branchTo;
					block->jumpTo = block->jumpTo->jumpTo;
				}
			}else{
				if(isEmpty(block->branchTo)){
					// branchTo has no instructions, so we can have our branchTo be it's jumpTo
					// since it won't have a branchTo (at least it shouldn't)
					if(block->branchTo->jumpTo != nullptr){
						block->branchTo = block->branchTo->jumpTo;
					}else{
						block->branchTo = nullptr;
					}
				}
				if(isEmpty(block->jumpTo)){
					// jumpTo has no instructions, so we can have our jumpTo be it's jumpTo
					// since it won't have a branchTo (at least it shouldn't)
					if(block->jumpTo->jumpTo != nullptr){
						block->jumpTo = block->jumpTo->jumpTo;
					}else{
						block->jumpTo = nullptr;
					}
				}
			}
		}
	private:
		bool isEmpty(std::shared_ptr<BasicBlock> block){
			return block->instructions.size() == 0;
		}
	};
}

#endif