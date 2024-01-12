#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <stack>
#include <cctype>

class RPN
{
	private:

		std::string		_expression;
	
	public:
	
		RPN();
		RPN(std::string expression);
		~RPN();
		RPN(const RPN &original);
		RPN &operator=(const RPN &other);

		int	RPNcalculator();
};

#endif