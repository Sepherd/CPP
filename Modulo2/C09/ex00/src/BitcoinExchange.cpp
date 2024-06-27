#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange(std::string file, std::string db) : _file(file)
{
	std::ifstream data(_file.c_str());
	if (!data)
	{
		std::cerr << "Could not open file." << std::endl;
		return ;
	}
	std::ifstream database(db.c_str());
	if (!database)
	{
		std::cerr << "Could not open database." << std::endl;
		return ;
	}

	std::string	line;
	std::getline(database, line);
	char *end;
	while (std::getline(database, line))
	{
		size_t		pos = line.find(',');
		std::string	date = line.substr(0, pos);
		float		rate = std::strtof(line.substr(pos + 1).c_str(), &end);
		_btcRate[date] = rate;
	}
	database.close();
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &original)
{
	*this = original;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->_btcValue = other._btcValue;
		this->_btcRate = other._btcRate;
		this->_file = other._file;
	}
	return (*this);
}

int	checkDate(std::string date)
{
	std::istringstream iss(date);
	int		y, m, d;
	char	sep;

	if ((!(iss >> y >> sep) || sep != '-') || (!(iss >> m >> sep) || sep != '-')
		|| !(iss >> d) || (y < 0 || m < 1 || d < 1 || m > 12 || d > 31))
		return (0);
	return (1);
}

void	BitcoinExchange::exchange()
{
	std::ifstream data(_file.c_str());
	if (!data.is_open())
	{
		std::cerr << "Could not open file." << std::endl;
		return ;
	}

	std::string	line;
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		char				sep;
		float				value;
		if (!(iss >> date >> sep >> value) || sep != '|' || !checkDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue ;
		}
		if (value < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (value > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue ;
		}

		std::map<std::string, float>::iterator it = _btcRate.lower_bound(date);

        if (it == _btcRate.end() || (it != _btcRate.begin() && it->first != date))
			--it;
		float	rate = it->second;
		float	total = value * rate;
		std::cout << date << " => " << value << " = " << total << std::endl;
	}
}