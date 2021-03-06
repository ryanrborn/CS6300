#ifndef CS6300_AST_SUCCESSOR_EXPRESSION_HPP
#define CS6300_AST_SUCCESSOR_EXPRESSION_HPP
#include "Expression.hpp"
namespace cs6300
{
class SuccessorExpression : public Expression
{
public:
  SuccessorExpression(std::shared_ptr<Expression> expr);
  std::shared_ptr<BasicBlock> emit() const;
  std::shared_ptr<Type> type() const;
  int value() const;
  bool isConst() const;

private:
  std::shared_ptr<Expression> m_expr;
};
}
#endif

