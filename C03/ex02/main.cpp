/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 19:13:04 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap trap1("Will");
	ScavTrap scav1("Scavatrice Malefica");
	FragTrap frag1;
	FragTrap frag2("Bomb");
	
	trap1.attack("Jack");
	scav1.attack("Jack");
	frag1.attack("Jack");
	frag2.attack("Jack");
	scav1.guardGate();
	for (int i = 0; i < 100; i++)	
		frag1.highFivesGuys();
	frag2.attack("Jack");
	frag2.takeDamage(120);
	frag2.attack("Jack");
	
	return (0);
}