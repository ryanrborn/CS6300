#include "Optimizer.hpp"
#include "../AST_INC/AST/Program.hpp"
#include "../AST_INC/AST/Statements/Statement.hpp"
#include "Tools/Clean.hpp"
#include "Algorithms/SubExpressionElimination.hpp"
#include "Algorithms/RegisterAllocation.hpp"
#include "TraverseBlocks.hpp"
#include "Algorithms/CodeMotion.hpp"

#include <iostream>
#include <vector>
#include <sstream>

/*Add new AST based optimizations here*/
std::shared_ptr<cs6300::Program>
cs6300::optimizer(std::shared_ptr<cs6300::Program> original)
{
  // do some function inlining here... or in the cfg
  // will have to merge symbol tables, piping parameters and return statements
  // the book does it in the cfg... so I'll have help there.
  return original;
}

/*Add new control flow graph based optimizations here*/
std::pair<std::shared_ptr<cs6300::BasicBlock>,
          std::shared_ptr<cs6300::BasicBlock>>
cs6300::optimizer(std::pair<std::shared_ptr<cs6300::BasicBlock>,
                            std::shared_ptr<cs6300::BasicBlock>> original)
{
  clean(original);

  // now run through the common subexpression elimination algorithm
  auto see = std::make_shared<cs6300::SubExpressionElimination>();
  cs6300::traverseBlocks(original.first, see);
  cs6300::traverseBlocks(original.second, see);

  clean(original);

  // code motion
  auto cm = std::make_shared<cs6300::CodeMotion>();
  cm->execute(original);


  // last is register allocation
  auto ra = std::make_shared<cs6300::RegisterAllocation>();
  // since register allocation traverses the blocks differetly
  // we won't use our cool traverseBlocks method

  // this isn't working currently... we'll have to see if I can fix it later
  // ra->execute(original.first);
  // ra->execute(original.second);

  return original;
}

/*std::string cs6300::getBlockSig(std::shared_ptr<BasicBlock> block){
  std::ostringstream stream;
  stream << block;
  return stream.str();
}*/

