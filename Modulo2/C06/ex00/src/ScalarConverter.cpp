/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/11/24 12:03:57 by sepherd          ###   ########.fr       */
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

int	checkString(const std::string &value)
{
	int	i = 0;
	if (!isdigit(value[i]))
	{
		while (i < value.length())
			if (isdigit(value[i++]))
				return (0);
	}
	std::istringstream iss(value);
    char remaining;

    int intValue;
    iss >> intValue;
    if (iss && !(iss >> remaining))
	{
        return (1);
    }
	else
    {
    	iss.clear();
    	iss.seekg(0);

    	float floatValue;
    	iss >> floatValue;
    	if (iss && !(iss >> remaining))
		{
			std::cout << remaining << std::endl;
    	    return (1);
    	}
		else
		{
			iss.clear();
   			iss.seekg(0);

			double doubleValue;
    		iss >> doubleValue;
    		if (iss && !(iss >> remaining))
			{
        		return (1);
    		}
			else
				return (0);
		}
	}
}

int	isSpecial(const std::string &value)
{
	if ((!value.compare(0, 3, "nan") && value.length() > 3) || (!value.compare(0, 3, "inf") && value.length() > 3) ||
		(!value.compare(0, 4, "-inf") && value.length() > 4) || (!value.compare(0, 4, "+inf") && value.length() > 4) ||
		(!value.compare(0, 4, "inff") && value.length() > 4) || (!value.compare(0, 5, "+inff") && value.length() > 5) ||
		(!value.compare(0, 5, "-inff") && value.length() > 5) || (!value.compare(0, 4, "nanf") && value.length() > 4))
	{
		std::cout << "Invalid argument" << std::endl;
		return (0);
	}
	if (value == "nan" || value == "inf" || value == "inff" || value == "nanf" || value == "+inf" ||
		value == "-inf" || value == "-inff" || value == "+inff")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";		
		std::cout << "float: " << std::stof(value) << "f \n";
		std::cout << "char: " << std::stod(value) << std::endl;
		return (0);
	}
	return (1);
}

void	convertDouble(const std::string &value)
{
	if (!isdigit(value[0]))
	{
		char	c = value[0];
		double	d = static_cast<double>(c);
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else
	{
		try
		{
			double	d = std::stod(value);
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "float: Impossible" << std::endl;
		}
	}
}

void	convertFloat(const std::string &value)
{
	if (!isdigit(value[0]))
	{
		char	c = value[0];
		float	f = static_cast<float>(c);
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	else
	{
		try
		{
			float f = std::stof(value);
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "float: Impossible" << std::endl;
		}
	}
}

void	convertInt(const std::string &value)
{
	if (!isdigit(value[0]))
	{
		char	c = value[0];
		int		i = static_cast<int>(c);
		std::cout << "int: " << i << std::endl;
	}
	else
	{
		try
		{
			int i = std::stoi(value);
			std::cout << "int: " << i << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "int: Impossible" << std::endl;
		}
	}
}

void	convertChar(const std::string &value)
{
	std::istringstream cStream(value);
	int		i;
	char	c;
	cStream >> i;
	c = i;
	if (value.length() == 1 && !isdigit(value[0]))
		std::cout << "char: " << value[0] << std::endl;
	else if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
}

void	ScalarConverter::convert(const std::string &value)
{
	// if (!checkString(value))
	// {
	// 	std::cout << "Invalid argument" << std::endl;
	// 	return ;
	// }
	if (!isSpecial(value))
	{
		return ;
	}
	if (value.length() > 1 && !isdigit(value[0]))
	{
		std::cout << "Invalid argument" << std::endl;
		return ;
	}
	convertChar(value);
	convertInt(value);
	convertFloat(value);
	convertDouble(value);
}