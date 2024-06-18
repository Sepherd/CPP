/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2024/06/18 18:13:02 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &original)
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	return (*this);
}

int	symCount(const std::string &value, char sym)
{
	int	c = 0;
	for (std::string::size_type i = 0; i < value.length(); i++)
	{
		if (value[i] == sym)
			c++;
		if (c > 1)
			return (0);
	}
	return (1);
}

int	checkSymbol(const std::string &value)
{
	if (!symCount(value, '.') || !symCount(value, '+') || !symCount(value, '-') || !symCount(value, 'f'))
		return (0);
	int	i = 0;
	int isFloat = 0;
	while (i < value.length())
	{
		if (value[i] == '+' || value[i] == '-')
			i++;
		while (isdigit(value[i]))
			i++;
		if (value[i] == '.')
		{
			i++;
			isFloat = 1;
		}
		while (isdigit(value[i]))
			i++;
		if (value[i] == 'f' && isFloat == 1 && value[i + 1] == '\0')
			return (1);
		else if (value[i] != '\0')
			return (0);
	}
	return (1);
}

int	checkString(const std::string &value)
{
	if (value.length() > 1)
		if (!checkSymbol(value))
			return (0);
	return (1);	
}

int isChar(const std::string &value)
{
	if (value.length() == 1 && !isdigit(value[0]))
		return (1);
	return (0);
}

void	convertDouble(const std::string &value)
{
	if (isChar(value))
	{
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value[0]) << std::endl;
		return ;
	}
	char *end;
	errno = 0;
	double i = std::strtod(value.c_str(), &end);
	if ((*end != '\0' && *end != 'f') || errno == ERANGE)
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	std::cout << "double: " << std::fixed << std::setprecision(1) << i << std::endl;
}

void	convertFloat(const std::string &value)
{
	if (isChar(value))
	{
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value[0]) << "f" << std::endl;
		return ;
	}
	char *end;
	errno = 0;
	float i = std::strtof(value.c_str(), &end);
	if ((*end != '\0' && *end != 'f') || errno == ERANGE)
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << i << "f" << std::endl;
}

void	convertInt(const std::string &value)
{
	if (isChar(value))
	{
		std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
		return ;
	}
	char *end;
	long i = std::strtol(value.c_str(), &end, 10);
	if (*end != '\0' && *end != '.')
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << i << std::endl;
}

void	convertChar(const std::string &value)
{
	std::istringstream cStream(value);  //classe di flusso di input che legge da una stringa
	int		i;
	char	c;
	if (cStream >> i)	//estrae un intero dalla stringa, i avrà il valore di value
		c = i;			//conversione implicita da int a char
	else
		c = value[0];
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

int	isSpecial(const std::string &value)
{
	// if ((!value.compare(0, 3, "nan") && value.length() > 3) || (!value.compare(0, 3, "inf") && value.length() > 3) ||
	// 	(!value.compare(0, 4, "-inf") && value.length() > 4) || (!value.compare(0, 4, "+inf") && value.length() > 4) ||
	// 	(!value.compare(0, 4, "inff") && value.length() > 4) || (!value.compare(0, 5, "+inff") && value.length() > 5) ||
	// 	(!value.compare(0, 5, "-inff") && value.length() > 5) || (!value.compare(0, 4, "nanf") && value.length() > 4))
	// {
	// 	std::cout << "Invalid argumentaaaaa" << std::endl;
	// 	return (0);
	// }
	if (value == "nan" || value == "inf" || value == "inff" || value == "nanf" || value == "+inf" ||
		value == "-inf" || value == "-inff" || value == "+inff")
	{
		std::cout << "char: impossible\n";
		// std::cout << "int: impossible\n";		
		// std::cout << "float: " << std::stof(value) << "f\n";
		// std::cout << "double: " << std::stod(value) << std::endl;
		convertInt(value);
		convertFloat(value);
		convertDouble(value);
		return (0);
	}
	return (1);
}

void	ScalarConverter::convert(const std::string &value)
{
	if (!isSpecial(value))
		return ;
	if (!checkString(value))
	{
		std::cout << "Invalid argument" << std::endl;
		return ;
	}
	convertChar(value);
	convertInt(value);
	convertFloat(value);
	convertDouble(value);
}