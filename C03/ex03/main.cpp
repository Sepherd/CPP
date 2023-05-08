/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/08 17:09:29 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"
#include "includes/DiamondTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap trap1("Will");
	// ScavTrap scav1("Scavatrice Malefica");
	// FragTrap frag1("Bomb");
	DiamondTrap	diamond1;
	DiamondTrap	diamond2("Prezioso");
	// trap1.attack("Jack");
	// scav1.attack("Jack");
	// frag1.attack("Jack");
	diamond1.attack("Jack");
	diamond2.attack("Jack");
	diamond2.whoAmI();
	return (0);
}