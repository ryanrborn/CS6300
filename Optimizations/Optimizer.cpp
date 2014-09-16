#include "Optimizer.hpp"
#include "../AST_INC/AST/Program.hpp"
#include "../AST_INC/AST/Statements/Statement.hpp"
#include "SubExpressionElimination.hpp"

#include <iostream>
#include <vector>

/*Add new AST based optimizations here*/
std::shared_ptr<cs6300::Program>
cs6300::optimizer(std::shared_ptr<cs6300::Program> original)
{
	for(auto stmt : original->main){
		auto basicBlockPair = stmt->emit();
		cs6300::subExpressionElimination(basicBlockPair.first);
	}
  return original;
}
/*Add new control flow graph based optimizations here*/
std::pair<std::shared_ptr<cs6300::BasicBlock>,
          std::shared_ptr<cs6300::BasicBlock>>
cs6300::optimizer(std::pair<std::shared_ptr<cs6300::BasicBlock>,
                            std::shared_ptr<cs6300::BasicBlock>> original)
{
  return original;
}

// debugging...
void cs6300::printBasicBlock(std::shared_ptr<cs6300::BasicBlock> block){
  for (int i=0; i<block->instructions.size(); i++){
    std::cout << "\t" << block->instructions[i].toString() << std::endl;
  }
}