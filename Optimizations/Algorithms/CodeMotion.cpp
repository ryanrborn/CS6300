#include "CodeMotion.hpp"

typedef std::shared_ptr<std::set<std::string>> expSet;
typedef std::shared_ptr<cs6300::BasicBlock> BasicB;

void cs6300::CodeMotion::execute(FlowGraph graph){
  regMap = buildRegMap(graph.first);
  expMap = buildExpMap(graph.first);
  parentMap = buildParentMap(graph.first);
  buildAvailSets(graph.first);

  auto removeSet = std::set<int>();

  auto newBlocks = std::vector<std::pair<BasicB, BasicB>>();

  traverseFlowGraph(graph.first, [&](BasicB block) {
    std::set<std::shared_ptr<BasicBlock>> children;
    if(block->jumpTo)
      children.insert(block->jumpTo);
    if(block->branchTo)
      children.insert(block->branchTo);

    for (auto child : children){
      auto moveSet = earliestPlacement(block, child);
      if (moveSet->size() > 0){
        auto newBlock = std::make_shared<cs6300::BasicBlock>();

        for (auto expression : (*moveSet)){
          auto reg = expMap->find(expression)->second[0];
          auto inst = regMap->find(reg)->second;

          auto v = getExpStack(inst);
          newBlock->instructions.insert(newBlock->instructions.end(), v.begin(), v.end());
          for (auto t : v){
            removeSet.insert(t.dest);
          }
        }

        newBlock->jumpTo = child;
        newBlocks.emplace_back(std::make_pair(block, newBlock));
      }
    }
    return true;
  });

  traverseFlowGraph(graph.first, [&](BasicB block) {
    std::vector<int> removeableIndices = std::vector<int>();

    for (int i = 0; i < block->instructions.size(); i++){
      auto inst = block->instructions[i];
      for (auto reg : removeSet){
        if (reg == inst.dest && inst.op != ThreeAddressInstruction::StoreMemory){
          removeableIndices.emplace_back(i);
        }
      }
    }

    for (int i = removeableIndices.size()-1; i >= 0; i--){
      auto index = removeableIndices[i];
      block->instructions.erase(block->instructions.begin() + index);
    }

    return true;
  });

  for (auto blockPair : newBlocks){
    blockPair.first->jumpTo = blockPair.second;
  }
}

std::vector<cs6300::ThreeAddressInstruction> cs6300::CodeMotion::getExpStack(cs6300::ThreeAddressInstruction inst){
  auto expressionsTALs = std::vector<cs6300::ThreeAddressInstruction>();
  if (inst.op == ThreeAddressInstruction::LoadMemoryOffset){
    expressionsTALs.emplace_back(inst);
    return expressionsTALs;
  } else if (inst.op == ThreeAddressInstruction::LoadValue){
    expressionsTALs.emplace_back(inst);
    return expressionsTALs;
  }

  if (isExp(inst) == false && inst.op != ThreeAddressInstruction::LoadMemory){
    return expressionsTALs;
  }

  auto a = getExpStack(regMap->find(inst.src1)->second);
  auto b = getExpStack(regMap->find(inst.src2)->second);

  expressionsTALs.insert(expressionsTALs.end(), a.begin(), a.end());
  expressionsTALs.insert(expressionsTALs.end(), b.begin(), b.end());
  expressionsTALs.emplace_back(inst);
  return expressionsTALs;
}

expSet cs6300::CodeMotion::earliestPlacement(BasicB i, BasicB j){

  auto parents = parentMap[i];
  if (parents.size() == 0){
    return subtractSets((*anticInMap)[j], (*availOutMap)[i]);
  }

  auto a = subtractSets((*anticInMap)[j], (*availOutMap)[i]);
  auto b = addSets(findKilled(i), (*anticOutMap)[i]);
  return intersectSets(a, b);

}

std::shared_ptr<std::map<std::string, std::vector<int>>> cs6300::CodeMotion::buildExpMap(BasicB input){
  auto expMap = std::make_shared<std::map<std::string, std::vector<int>>>();

  traverseFlowGraph(input, [&](BasicBlockPointer block){
    for (ThreeAddressInstruction inst : block->instructions){
      auto key = getStringRep(inst);
      auto val = inst.dest;
      if (inst.op == ThreeAddressInstruction::StoreMemory){
        val = inst.src1;
      }

      if (expMap->count(key)){
        expMap->find(key)->second.emplace_back(val);
      } else{
        std::vector<int> vector = std::vector<int>();
        vector.emplace_back(val);
        (*expMap)[key] = vector;
      }
    }
    return true;
  });
  return expMap;
}


std::shared_ptr<std::map<int, cs6300::ThreeAddressInstruction>> cs6300::CodeMotion::buildRegMap(BasicB input){
  auto regMap = std::make_shared<std::map<int, ThreeAddressInstruction>>();

  traverseFlowGraph(input, [&](BasicBlockPointer block){
    for (ThreeAddressInstruction inst : block->instructions){
      if (inst.op == ThreeAddressInstruction::StoreMemory){
        regMap->insert(std::make_pair(inst.src1, ThreeAddressInstruction(inst.op, inst.dest,inst.src1,inst.src2)));
      } else{
        regMap->insert(std::make_pair(inst.dest, ThreeAddressInstruction(inst.op, inst.dest,inst.src1,inst.src2)));
      }
    }
    return true;
  });
  return regMap;
}

expSet cs6300::CodeMotion::unionSets(expSet a, expSet b){
  auto unionSet = std::make_shared<std::set<std::string>>();

  for (auto i : (*a)){
    unionSet->insert(i);
  }
  for (auto i : (*b)){
    unionSet->insert(i);
  }
  return unionSet;
}

expSet cs6300::CodeMotion::intersectSets(expSet a, expSet b){
  auto intersectSet = std::make_shared<std::set<std::string>>();

  for (auto i : (*a)){
    if (b->find(i) != b->end()){
      intersectSet->insert(i);
    }
  }
  return intersectSet;
}

expSet cs6300::CodeMotion::addSets(expSet a, expSet b){
  return unionSets(a, b);
}

expSet cs6300::CodeMotion::subtractSets(expSet a, expSet b){
  auto subtractSet = std::make_shared<std::set<std::string>>();

  for (auto i : (*a)){
    if (b->find(i) == b->end()){
      subtractSet->insert(i);
    }
  }
  return subtractSet;
}

void cs6300::CodeMotion::buildAvailSets(BasicB input){
  availInMap = std::make_shared<std::map<BasicB, expSet>>();
  availOutMap = std::make_shared<std::map<BasicB, expSet>>();
  anticInMap = std::make_shared<std::map<BasicB, expSet>>();
  anticOutMap = std::make_shared<std::map<BasicB, expSet>>();
  traverseFlowGraph(input, [&](BasicBlockPointer block) {
    availInMap->insert(std::make_pair(block, std::make_shared<std::set<std::string>>()));
    availOutMap->insert(std::make_pair(block, std::make_shared<std::set<std::string>>()));
    anticInMap->insert(std::make_pair(block, std::make_shared<std::set<std::string>>()));
    anticOutMap->insert(std::make_pair(block, std::make_shared<std::set<std::string>>()));
    return true;
  });
  traverseFlowGraph(input, [&](BasicBlockPointer block) {
    if (parentMap.count(block) == 0){
      parentMap.insert(std::make_pair(block, std::vector<BasicB>()));
    }
    auto parents = parentMap.find(block)->second;
    bool entry = !parents.size();
    bool exit = !block->jumpTo && !block->branchTo;
    auto allExp = allExpressions();

    if (!entry){
      (*availInMap)[block] = allExp;
    }

    if (!exit){
      (*anticOutMap)[block] = allExp;
    }

    auto avo = addSets((*availOutMap)[block], availOut(block));
    (*availOutMap)[block] = avo;

    auto ani = addSets((*anticInMap)[block], anticIn(block));
    (*anticInMap)[block] = ani;

    return true;
  });


  bool setsDidChange = false;
  do{
    traverseFlowGraph(input, [&](BasicBlockPointer block) {

      int inSize = (*availInMap)[block]->size();
      int outSize = (*availOutMap)[block]->size();

      auto parents = parentMap[block];
      bool initialized = true;

      (*availOutMap)[block]->clear();
      (*availInMap)[block]->clear();

      for (auto p : parents){
        auto parentsAvOut = (*availOutMap)[p];

        if (initialized){
          (*availInMap)[block] = addSets(parentsAvOut, (*availInMap)[block]);
          initialized = false;
          continue;
        }
        (*availInMap)[block] = intersectSets(parentsAvOut, (*availInMap)[block]);
      }
      (*availOutMap)[block] = availOut(block);

      setsDidChange = outSize != (*availOutMap)[block]->size() || inSize !=  (*availInMap)[block]->size();
      return true;
    });

    traverseFlowGraph(input, [&](BasicBlockPointer block) {
      int inSize = (*anticInMap)[block]->size();
      int outSize = (*anticOutMap)[block]->size();

      (*anticOutMap)[block]->clear();

      std::set<std::shared_ptr<BasicBlock>> children;
      if(block->jumpTo)
        children.insert(block->jumpTo);
      if(block->branchTo)
        children.insert(block->branchTo);

      bool initialize = true;
      for (auto child : children){
          if (initialize){
            (*anticOutMap)[block] = addSets((*anticOutMap)[block], (*anticInMap)[child]);
            initialize = false;
            continue;
          }
        (*anticOutMap)[block] = intersectSets((*anticOutMap)[block], (*anticInMap)[child]);
      }

      (*anticInMap)[block]->clear();
      (*anticInMap)[block] = addSets((*anticInMap)[block], anticIn(block));

      setsDidChange = outSize != (*anticOutMap)[block]->size() || inSize !=  (*anticInMap)[block]->size();

      return true;
    });

    }while(setsDidChange);
}

expSet cs6300::CodeMotion::allExpressions(){
  expSet all = std::make_shared<std::set<std::string>>();
  for (auto e : (*expMap)){
    all->insert(e.first);
  }
  all->erase("Error");
  return all;
}

expSet cs6300::CodeMotion::availIn(BasicB input){
  auto availInSet = std::make_shared<std::set<std::string>>();

  if (parentMap.count(input) == 0){
    return availInSet;
  }

  auto parents = parentMap.find(input)->second;
  availInSet = availOut(parents[0]);

  for (int i = 1; i < parents.size(); i++){
    availInSet = intersectSets(availInSet, availOut(parents[i]));
  }
  return availInSet;
}

expSet cs6300::CodeMotion::availOut(BasicB input){
  auto de = findDE(input);
  auto avIn = availInMap->find(input)->second;
  auto kill = findKilled(input);
  auto availOutSet = addSets(de, subtractSets(avIn, kill));
  return availOutSet;
}

expSet cs6300::CodeMotion::anticIn(BasicB input){
  auto ue = findUE(input);
  auto ano = anticOutMap->find(input)->second;
  auto k = findKilled(input);
  auto anticInSet = addSets(ue, subtractSets(ano, k));
  return anticInSet;
}

expSet cs6300::CodeMotion::anticOut(BasicB input){
  auto anticOutSet = std::make_shared<std::set<std::string>>();
  if (input->jumpTo != nullptr && input->branchTo != nullptr){
    anticOutSet = intersectSets(anticIn(input->jumpTo), anticIn(input->branchTo));
  } else if(input->jumpTo != nullptr){
    anticOutSet = anticIn(input->jumpTo);
  } else if(input->branchTo != nullptr){
    anticOutSet = anticIn(input->branchTo);
  }
  return anticOutSet;
}

expSet cs6300::CodeMotion::findKilled(BasicB input){
  auto killed = std::make_shared<std::set<std::string>>();
  for (int i=input->instructions.size()-1; i >= 0; i--) {
    ThreeAddressInstruction inst = input->instructions[i];
    if (inst.op == ThreeAddressInstruction::StoreMemory){
      ThreeAddressInstruction insta = regMap->find(inst.src1)->second;
      int memOffset = insta.src2;

      for (auto kv : (*regMap)){
        if (isExp(kv.second) || kv.second.op == ThreeAddressInstruction::LoadMemoryOffset){
          if (expDefinesMemOffset(kv.second, memOffset, regMap)){
            killed->insert(getStringRep(kv.second));
          }
        }
      }
    }
  }
  return killed;
}

expSet cs6300::CodeMotion::findUE(BasicB input){

  auto upperwardlyExposed = std::make_shared<std::set<std::string>>();
  auto useSet = std::make_shared<std::set<int>>();

  for (int i=0; i < input->instructions.size(); i++) {
    ThreeAddressInstruction inst = input->instructions[i];

    if (inst.op == ThreeAddressInstruction::LoadValue){
      upperwardlyExposed->insert(getStringRep(inst));
    }
    else if (inst.op == ThreeAddressInstruction::LoadMemory){
      upperwardlyExposed->insert(getStringRep(regMap->find(inst.src1)->second));
    }
    else if (isExp(inst) && inst.op != ThreeAddressInstruction::StoreMemory){
      bool isUpperwardlyExposed = true;
      for (auto offset : (*useSet)){
        if (offset == inst.src1 || offset == inst.src2){
          isUpperwardlyExposed = false;
        }
      }
      if (isUpperwardlyExposed){
        upperwardlyExposed->insert(getStringRep(inst));
      }
      useSet->insert(inst.dest);
    }
  }
  return upperwardlyExposed;
}

expSet cs6300::CodeMotion::findDE(BasicB input){
  auto findDE = std::make_shared<std::set<std::string>>();
  auto redefinedSet = std::make_shared<std::set<int>>();
  for (int i=input->instructions.size()-1; i >= 0; i--) {
    ThreeAddressInstruction inst = input->instructions[i];

    if (isExp(inst)){
      bool isDownwardlyExposed = true;
      for (auto offset : (*redefinedSet)){
        if (expDefinesMemOffset(inst, offset, regMap)){
          isDownwardlyExposed = false;
        }
      }
      if (isDownwardlyExposed){
        if (inst.op == ThreeAddressInstruction::StoreMemory)
          findDE->insert(getStringRep(regMap->find(inst.src1)->second));
        else
          findDE->insert(getStringRep(inst));
      }
    }

    if (inst.op == ThreeAddressInstruction::StoreMemory){
      ThreeAddressInstruction insta = regMap->find(inst.src1)->second;
      redefinedSet->insert(insta.src2);
    }
  }
  return findDE;
}

bool cs6300::CodeMotion::expDefinesMemOffset(ThreeAddressInstruction a, int memoryOffset, std::shared_ptr<std::map<int, ThreeAddressInstruction>> expMap){
  if (expMap->count(a.dest) == 0){
    return false;
  }

  if (a.op == ThreeAddressInstruction::LoadValue){
    return false;
  }

  if (a.op == ThreeAddressInstruction::LoadMemoryOffset){
    if (a.src2 == memoryOffset){
      return true;
    } else{
      return false;
    }
  }

  if (a.op == ThreeAddressInstruction::LoadMemory){
    return (expDefinesMemOffset(expMap->find(a.src1)->second, memoryOffset, expMap));
  }

  if (isExp(a) == false){
    return false;
  }
  return (expDefinesMemOffset(expMap->find(a.src1)->second, memoryOffset, expMap) || expDefinesMemOffset(expMap->find(a.src2)->second, memoryOffset, expMap));
}

bool cs6300::CodeMotion::isExp(cs6300::ThreeAddressInstruction inst){
  switch (inst.op){
    case ThreeAddressInstruction::Add:
      return true;
      break;
    case ThreeAddressInstruction::AddValue:
      return true;
      break;
    case ThreeAddressInstruction::And:
      return true;
      break;
    case ThreeAddressInstruction::CallFunction:
      return false;
      break;
    case ThreeAddressInstruction::CopyArgument:
      return false;
      break;
    case ThreeAddressInstruction::Divide:
      return true;
      break;
    case ThreeAddressInstruction::IsEqual:
      return true;
      break;
    case ThreeAddressInstruction::IsGreater:
      return true;
      break;
    case ThreeAddressInstruction::IsGreaterEqual:
      return true;
      break;
    case ThreeAddressInstruction::IsLess:
      return true;
      break;
    case ThreeAddressInstruction::IsLessEqual:
      return true;
      break;
    case ThreeAddressInstruction::IsNotEqual:
      return true;
      break;
    case ThreeAddressInstruction::LoadLabel:
      return false;
      break;
    case ThreeAddressInstruction::LoadMemory:
      return false;
      break;
    case ThreeAddressInstruction::LoadMemoryOffset:
      return false;
      break;
    case ThreeAddressInstruction::LoadValue:
      return true;
      break;
    case ThreeAddressInstruction::Modulo:
      return true;
      break;
    case ThreeAddressInstruction::Multiply:
      return true;
      break;
    case ThreeAddressInstruction::Not:
      return true;
      break;
    case ThreeAddressInstruction::Or:
      return true;
      break;
    case ThreeAddressInstruction::ReadInt:
      return false;
      break;
    case ThreeAddressInstruction::ReadChar:
      return false;
      break;
    case ThreeAddressInstruction::RestoreFrame:
      return false;
      break;
    case ThreeAddressInstruction::Return:
      return false;
      break;
    case ThreeAddressInstruction::Stop:
      return false;
      break;
    case ThreeAddressInstruction::StoreMemory:
      return true;
      break;
    case ThreeAddressInstruction::StoreFrame:
      return false;
      break;
    case ThreeAddressInstruction::Subtract:
      return true;
      break;
    case ThreeAddressInstruction::UnaryMinus:
      return false;
      break;
    case ThreeAddressInstruction::WriteBool:
      return false;
      break;
    case ThreeAddressInstruction::WriteChar:
      return false;
      break;
    case ThreeAddressInstruction::WriteStr:
      return false;
      break;
    case ThreeAddressInstruction::WriteInt:
      return false;
      break;
  }
}

std::string cs6300::CodeMotion::getStringRep(cs6300::ThreeAddressInstruction inst){
  switch (inst.op){
    case ThreeAddressInstruction::Add:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "+" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::AddValue:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "+" + std::to_string(inst.src2) + ")";
      break;
    case ThreeAddressInstruction::And:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "&" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::CallFunction:
      return "Error";
      break;
    case ThreeAddressInstruction::CopyArgument:
      return "Error";
      break;
    case ThreeAddressInstruction::Divide:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "/" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::IsEqual:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "==" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::IsGreater:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + ">" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::IsGreaterEqual:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + ">=" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::IsLess:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "<" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::IsLessEqual:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "<=" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::IsNotEqual:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "!=" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::LoadLabel:
      return "Error";
      break;
    case ThreeAddressInstruction::LoadMemory:
      return getStringRep(regMap->find(inst.src1)->second);
      break;
    case ThreeAddressInstruction::LoadMemoryOffset:
      return "(" + std::to_string(inst.src2) + "($" + std::to_string(inst.src1) + "))";
      break;
    case ThreeAddressInstruction::LoadValue:
      return "(" + std::to_string(inst.src1) + ")";
      break;
    case ThreeAddressInstruction::Modulo:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "%" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::Multiply:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "*" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::Not:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "!" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::Or:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "||" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::ReadInt:
      return "Error";
      break;
    case ThreeAddressInstruction::ReadChar:
      return "Error";
      break;
    case ThreeAddressInstruction::RestoreFrame:
      return "Error";
      break;
    case ThreeAddressInstruction::Return:
      return "Error";
      break;
    case ThreeAddressInstruction::Stop:
      return "Error";
      break;
    case ThreeAddressInstruction::StoreMemory:
      return getStringRep(regMap->find(inst.src1)->second);
      break;
    case ThreeAddressInstruction::StoreFrame:
      return "Error";
      break;
    case ThreeAddressInstruction::Subtract:
      return "(" + getStringRep(regMap->find(inst.src1)->second) + "-" + getStringRep(regMap->find(inst.src2)->second) + ")";
      break;
    case ThreeAddressInstruction::UnaryMinus:
      return "Error";
      break;
    case ThreeAddressInstruction::WriteBool:
      return "Error";
      break;
    case ThreeAddressInstruction::WriteChar:
      return "Error";
      break;
    case ThreeAddressInstruction::WriteStr:
      return "Error";
      break;
    case ThreeAddressInstruction::WriteInt:
      return "Error";
      break;
  }
  return "Error";
}
