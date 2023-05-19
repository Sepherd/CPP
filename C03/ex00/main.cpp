/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 15:56:38 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap trap1("Trap One");
	ClapTrap trap2;
	
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
	trap2.attack("itself");
	
	return (0);
}