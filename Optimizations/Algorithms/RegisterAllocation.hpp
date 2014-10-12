#ifndef CS6300_REGISTERALLOCATION_HPP
#define CS6300_REGISTERALLOCATION_HPP

#include "../../AST_INC/AST/BasicBlock.hpp"
#include "../Algorithm.hpp"
#include "../VisitedBlocks.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

namespace cs6300 {
	class RegCFG{
	public:
		int name;
		std::vector<std::shared_ptr<RegCFG>> liveWith;
		std::vector<int> cantBe;

		RegCFG(int name):name(name){}

		bool operator< (const std::shared_ptr<RegCFG> other) const {
			return liveWith.size() < other->liveWith.size();
		}
	};

	class RegisterAllocation : public Algorithm {
	public:
		void execute(std::shared_ptr<BasicBlock> block);

	private:
		bool madeChanges = true;
		std::map<std::string, std::vector<int>> liveness;
		std::vector<std::shared_ptr<RegCFG>> cfg;
		std::map<int, int> registerMap;

		void traverse(std::shared_ptr<BasicBlock> block, bool buildMap);

		void buildMap(std::shared_ptr<BasicBlock> block);

		void buildCFG();

		void findAssignments();

		void reassignRegisters(std::shared_ptr<BasicBlock> block);

		std::string getBlockSig(std::shared_ptr<BasicBlock> block);

		int findRegCFG(int reg);
	};
}

#endif