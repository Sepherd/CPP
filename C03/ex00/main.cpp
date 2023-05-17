/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/17 18:09:58 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap trap1("Trap One");
	
	trap1.attack("Peter");
	trap1.takeDamage(5);
	for (int i = 0; i < 9; i++)
		trap1.beRepaired(5);
	trap1.takeDamage(30);
	trap1.attack("Peter");
	trap1.beRepaired(5);
	trap1.takeDamage(20);
	trap1.beRepaired(5);
	trap1.attack("Peter");
	trap1.takeDamage(500);
	trap1.attack("Peter");
	return (0);
}