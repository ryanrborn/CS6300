#ifndef CS6300_ALGORITHM_HPP
#define CS6300_ALGORITHM_HPP

#include "../AST_INC/AST/BasicBlock.hpp"
#include "../AST_INC/AST/ThreeAddressInstruction.hpp"
#include "../AST_INC/AST/Expressions/AdditionExpression.hpp"
#include "Algorithm.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

namespace cs6300 {
	class Algorithm {
	public:
		virtual void execute(std::shared_ptr<BasicBlock> block) = 0;
	};
}

#endif