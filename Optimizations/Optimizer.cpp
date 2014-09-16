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
		// std::cout << "after: " << basicBlockPair.first->instructions.size() << std::endl << std::endl;
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
        std::cout << "Add" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::AddValue:
        std::cout << "AddValue" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::And:
        std::cout << "And" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::CallFunction:
        std::cout << "CallFunction" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::CopyArgument:
        std::cout << "CopyArgument" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Divide:
        std::cout << "Divide" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsEqual:
        std::cout << "IsEqual" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsGreater:
        std::cout << "IsGreater" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsGreaterEqual:
        std::cout << "IsGreaterEqual" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsLess:
        std::cout << "IsLess" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsLessEqual:
        std::cout << "IsLessEqual" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::IsNotEqual:
        std::cout << "IsNotEqual" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::LoadValue:
        std::cout << "LoadValue" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Modulo:
        std::cout << "Modulo" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Multiply:
        std::cout << "Multiply" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Not:
        std::cout << "NotFunction" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Or:
        std::cout << "OrFunction" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::ReadInt:
        std::cout << "ReadInt" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::ReadChar:
        std::cout << "ReachChar" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Stop:
        std::cout << "Stop" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::Subtract:
        std::cout << "Subtract" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::UnaryMinus:
        std::cout << "UnaryMinus" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteBool:
        std::cout << "WriteBool" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteChar:
        std::cout << "Write Char" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteStr:
        std::cout << "Write String" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
      case ThreeAddressInstruction::WriteInt:
        std::cout << "Write Int" << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
        break;
    }
  }
}