#include "includes/RPN.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
        std::cout << "Launch with ./rpn \"expression\"" << std::endl;
    else
    {
       RPN rpn(av[1]);
       std::cout << rpn.RPNcalculator() << std::endl;
    }
    return (1);
}
