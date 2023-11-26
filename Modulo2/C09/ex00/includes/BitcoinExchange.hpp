#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iomanip>

class BitcoinExchange
{
    private:

        std::map<std::string, float>    _btcValue;
        std::map<std::string, float>    _btcRate;
        std::string                     _file;
    
    public:
        BitcoinExchange();
        BitcoinExchange(std::string file, std::string db);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &original);
        BitcoinExchange &operator=(const BitcoinExchange &other);

        void    exchange();
};

#endif