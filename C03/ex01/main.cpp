/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 19:10:42 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap trap1("Will");
	ScavTrap scav1;
	ScavTrap scav2("Scavatrice Malefica");
	
	trap1.attack("Jack");
	scav1.attack("Jack");
	scav2.attack("Jack");
	scav1.takeDamage(30);
	scav2.takeDamage(30);
	for (int i = 0; i < 50; i++)
		scav2.guardGate();
	scav1.takeDamage(75);
	scav1.attack("Jack");
	scav1.guardGate();
		
	return (0);
}