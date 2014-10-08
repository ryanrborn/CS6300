#ifndef CS6300_REGISTERALLOCATION_HPP
#define CS6300_REGISTERALLOCATION_HPP

#include "../../AST_INC/AST/BasicBlock.hpp"
#include "../Algorithm.hpp"

#include <iostream>

namespace cs6300 {
	class RegisterAllocation : public Algorithm {
	public:
		void execute(std::shared_ptr<BasicBlock> block){
			// we're not using the traverse blocks algorithm so
			// you're on your own as far as traversing the graph
			
		}
	};
}

#endif