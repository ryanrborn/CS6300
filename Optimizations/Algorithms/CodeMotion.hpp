#ifndef CS6300_CODEMOTION_HPP
#define CS6300_CODEMOTION_HPP

#include "../FlowGraph.hpp"

typedef std::shared_ptr<std::set<std::string>> expSet;
typedef std::shared_ptr<cs6300::BasicBlock> BasicB;

namespace cs6300{
	class CodeMotion {
	public:
		void execute(FlowGraph graph);

	private:
	    expSet findUE(BasicB input);
	    expSet findDE(BasicB input);
	    expSet findKilled(BasicB input);

	    expSet availIn(BasicB input);
	    expSet availOut(BasicB input);

	    expSet earliestPlacement(BasicB i, BasicB j);

	    expSet anticIn(BasicB input);
	    expSet anticOut(BasicB input);

	    expSet addSets(expSet a, expSet b);
	    expSet subtractSets(expSet a, expSet b);

	    expSet unionSets(expSet a, expSet b);
	    expSet intersectSets(expSet a, expSet b);

	    expSet allExpressions();

	    void buildAvailSets(BasicB input);

	    std::shared_ptr<std::map<int, ThreeAddressInstruction>> buildRegMap(BasicB input);
	    std::shared_ptr<std::map<std::string, std::vector<int>>> buildExpMap(BasicB input);

	    bool expDefinesMemOffset(ThreeAddressInstruction a, int memoryOffset, std::shared_ptr<std::map<int, ThreeAddressInstruction>> expMap);

	    std::vector<ThreeAddressInstruction> getExpStack(ThreeAddressInstruction inst);

	    std::string getStringRep(ThreeAddressInstruction inst);
	    bool isExp(ThreeAddressInstruction inst);

	    std::shared_ptr<std::map<int, cs6300::ThreeAddressInstruction>> regMap;
	    std::shared_ptr<std::map<std::string, std::vector<int>>> expMap;

	    std::shared_ptr<std::map<BasicB, expSet>> availOutMap;
	    std::shared_ptr<std::map<BasicB, expSet>> availInMap;

	    std::shared_ptr<std::map<BasicB, expSet>> anticOutMap;
	    std::shared_ptr<std::map<BasicB, expSet>> anticInMap;

	    std::map<BasicB, std::vector<BasicB>> parentMap;
	};
}

#endif