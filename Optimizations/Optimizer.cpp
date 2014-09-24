#include "Optimizer.hpp"
#include "../AST_INC/AST/Program.hpp"
#include "../AST_INC/AST/Statements/Statement.hpp"
#include "Algorithms/SubExpressionElimination.hpp"
#include "Algorithms/MaximizeBlocks.hpp"
#include "TraverseBlocks.hpp"

#include <iostream>
#include <vector>

/*Add new AST based optimizations here*/
std::shared_ptr<cs6300::Program>
cs6300::optimizer(std::shared_ptr<cs6300::Program> original)
{
  // do some function inlining here... or in the cfg
  // will have to merge symbol tables, piping parameters and return statements
  // the book does it in the cfg... so I'll have help there.
  std::cout << "got a program" << std::endl;
  return original;
}

/*Add new control flow graph based optimizations here*/
std::pair<std::shared_ptr<cs6300::BasicBlock>,
          std::shared_ptr<cs6300::BasicBlock>>
cs6300::optimizer(std::pair<std::shared_ptr<cs6300::BasicBlock>,
                            std::shared_ptr<cs6300::BasicBlock>> original)
{
  std::cout << "got a pair of basic blocks" << std::endl;
  // now run through the common subexpression elimination algorithm
  auto see = std::make_shared<cs6300::SubExpressionElimination>();
  cs6300::traverseBlocks(original.first, see);
  cs6300::traverseBlocks(original.second, see);
  return original;
}
