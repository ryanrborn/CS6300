#ifndef CS6300_CLEAN_HPP
#define CS6300_CLEAN_HPP

#include <memory>
#include <map>

#include "../../AST_INC/AST/BasicBlock.hpp"

namespace cs6300{
  void clean(std::pair<std::shared_ptr<cs6300::BasicBlock>,
              std::shared_ptr<cs6300::BasicBlock>> original);
}
#endif
