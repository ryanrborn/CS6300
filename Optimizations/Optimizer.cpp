#include "Optimizer.hpp"
#include "../AST_INC/AST/Program.hpp"
#include "../AST_INC/AST/Statements/Statement.hpp"
#include "Algorithms/SubExpressionElimination.hpp"
#include "Algorithms/MaximizeBlocks.hpp"
#include "Algorithms/RegisterAllocation.hpp"
#include "TraverseBlocks.hpp"
#include "VisitedBlocks.hpp"

#include <iostream>
#include <vector>

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
  auto vb = VisitedBlocks::instance();
  vb->reset();

  // first let's maximize our block sizes
  auto mb = std::make_shared<cs6300::MaximizeBlocks>();
  cs6300::traverseBlocks(original.first, mb);
  cs6300::traverseBlocks(original.second, mb);

  // reset visited blocks
  vb->reset();

  // now run through the common subexpression elimination algorithm
  auto see = std::make_shared<cs6300::SubExpressionElimination>();
  cs6300::traverseBlocks(original.first, see);
  cs6300::traverseBlocks(original.second, see);



  // last is register allocation
  auto ra = std::make_shared<cs6300::RegisterAllocation>();
  // since register allocation traverses the blocks differetly
  // we won't use our cool traverseBlocks method
  ra->execute(original.first);
  ra->execute(original.second);

  return original;
}