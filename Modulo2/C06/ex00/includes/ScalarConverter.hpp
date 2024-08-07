/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/18 16:11:32 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ScalarConverter_HPP
#define  ScalarConverter_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <limits>

class  ScalarConverter
{
	private:

		ScalarConverter();
		ScalarConverter(std::string const name, int grade);
		ScalarConverter(const  ScalarConverter &original);
		ScalarConverter &operator=(const  ScalarConverter &other);

	public:

		static void	convert(const std::string &value);
		~ScalarConverter();
};

#endif