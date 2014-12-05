#include "Clean.hpp"
#include "../../AST_INC/AST/BasicBlock.hpp"
#include "../MaximizeBlocks/MaximizeBlocks.hpp"
#include "VisitedBlocks.hpp"

void cs6300::clean(std::pair<std::shared_ptr<cs6300::BasicBlock>,
                            std::shared_ptr<cs6300::BasicBlock>> original)
{
  maximizeBlocks(original);
  auto vb = VisitedBlocks::instance();
  vb->reset();
}

