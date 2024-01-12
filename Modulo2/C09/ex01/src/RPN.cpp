#include "../includes/RPN.hpp"

RPN::RPN()
{
	return ;
}

RPN::RPN(std::string expression) : _expression(expression)
{}

RPN::~RPN()
{}

RPN::RPN(const RPN &original)
{
	*this = original;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		this->_expression = other._expression;
	return (*this);
}

void	ft_error()
{
	std::cerr << "Error" << std::endl;
	exit(0);
}

bool is_operator(char el)
{
	return el == '+' || el == '-' || el == '*' || el == '/';
}

int	calculate(int op1, int op2, char op)
{
	int result;
	switch(op)
	{
		case '+':
			result = op1 + op2;
			break ;
		case '-':
			result = op1 - op2;
			break ;
		case '*':
			result = op1 * op2;
			break ;
		case '/':
			if (op2 != 0)
				result = op1 / op2;
			else
				ft_error();
			break ;
		default:
			ft_error();
	}
	return (result);
}

int	RPN::RPNcalculator()
{
	std::stack<int> 	rpn_stack;
	std::istringstream	iss(_expression);
	std::string			el;

	while (iss >> el)
	{
		if(isdigit(el[0]) || (el.length() > 1 && el[0] == '-' && isdigit(el[1])))
		{
			rpn_stack.push(atoi(el.c_str()));
		}
		else if (is_operator(el[0]))
		{
			if(rpn_stack.size() < 2)
				ft_error();
			int	op2 = rpn_stack.top();
			rpn_stack.pop();
			int	op1 = rpn_stack.top();
			rpn_stack.pop();
			int	result = calculate(op1, op2, el[0]);
			rpn_stack.push(result);
		}
		else
			ft_error();
	}
	if (rpn_stack.size() != 1)
		ft_error();
	return rpn_stack.top();
}