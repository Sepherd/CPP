/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/18 20:03:23 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include <iostream>

int	main()
{
	Bureaucrat test("Gino", 5);
	Bureaucrat def;
	std::cout << test.getName() << std::endl;
	std::cout << test.getGrade() << std::endl;
	std::cout << def.getName() << std::endl;
	std::cout << def.getGrade() << std::endl;
	
	return (0);
}