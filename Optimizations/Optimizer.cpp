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
    auto inst = block->instructions[i];


    switch (inst.op){
      case ThreeAddressInstruction::Add:
        std::cout << "\tAdd " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::AddValue:
        std::cout << "\tAddValue " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::And:
        std::cout << "\tAnd " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::CallFunction:
        std::cout << "\tCallFunction " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::CopyArgument:
        std::cout << "\tCopyArgument " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Divide:
        std::cout << "\tDivide " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsEqual:
        std::cout << "\tIsEqual " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsGreater:
        std::cout << "\tIsGreater " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsGreaterEqual:
        std::cout << "\tIsGreaterEqual " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsLess:
        std::cout << "\tIsLess " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsLessEqual:
        std::cout << "\tIsLessEqual " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsNotEqual:
        std::cout << "\tIsNotEqual " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::LoadLabel:
        std::cout << "\tLoadLabel " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::LoadMemory:
        std::cout << "\tLoadMemory " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::LoadValue:
        std::cout << "\tLoadValue " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Modulo:
        std::cout << "\tModulo " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Multiply:
        std::cout << "\tMultiply " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Not:
        std::cout << "\tNotFunction " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Or:
        std::cout << "\tOrFunction " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::ReadChar:
        std::cout << "\tReachChar " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::ReadInt:
        std::cout << "\tReadInt " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Stop:
        std::cout << "\tStop " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::StoreMemory:
        std::cout << "\tStoreMemory " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Subtract:
        std::cout << "\tSubtract " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::UnaryMinus:
        std::cout << "\tUnaryMinus " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteBool:
        std::cout << "\tWriteBool " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteChar:
        std::cout << "\tWrite Char " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteInt:
        std::cout << "\tWrite Int " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteStr:
        std::cout << "\tWrite String " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
    }
  }
}