#ifndef CS6300_CALL_STATEMENT_HPP
#define CS6300_CALL_STATEMENT_HPP

#include "Statement.hpp"
#include "AST/Expressions/Expression.hpp"

#include <string>
#include <vector>

namespace cs6300
{
  class Call : public Statement
  {
    public:
      Call(std::string n, std::vector<std::shared_ptr<Expression>> args)
          : Statement()
          , name(n)
          , arguments(args)
      {
      }
    std::pair<std::shared_ptr<BasicBlock>, std::shared_ptr<BasicBlock>> emit();

    private:
      std::string name;
      std::vector<std::shared_ptr<Expression>> arguments;
  };
}
#endif
