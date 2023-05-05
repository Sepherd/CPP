/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/05 15:51:15 by arecce           ###   ########.fr       */
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
	scav1.guardGate();
	scav2.guardGate();
	return (0);
}