#include "includes/BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
        std::cout << "Launch with ./btc input.txt" << std::endl;
    else
    {
        BitcoinExchange btc(std::string(av[1]), "data.csv");
        btc.exchange();
    }
    return (1);
}
