/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/23 17:28:18 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Launch with ./convert [value]" << std::endl;
	else
		ScalarConverter::convert(std::string(av[1]));
	return (0);
}