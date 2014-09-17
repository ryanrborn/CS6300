#ifndef CS6300_BASIC_BLOCK_HPP
#define CS6300_BASIC_BLOCK_HPP

#include <memory>
#include <vector>
#include <iostream>
#include "ThreeAddressInstruction.hpp"

namespace cs6300
{
class BasicBlock
{
  public:
  std::vector<ThreeAddressInstruction> instructions;
  std::shared_ptr<BasicBlock> jumpTo;
  std::shared_ptr<BasicBlock> branchTo;
  int branchOn;
  bool visited;
  BasicBlock():visited(false){}
  void printInsts(){
    for(auto i : instructions){
      std::cout << "\t" << i.toString() << std::endl;
    }
  }
};
}
#endif
