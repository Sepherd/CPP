#include "includes/BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
        std::cout << "Error: could not open file." << std::endl;
    else
    {
        BitcoinExchange btc(std::string(av[1]), "data.csv");
        btc.exchange();
    }
    return (1);
}
