/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/17 19:19:11 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"
#include "includes/FragTrap.hpp"
#include "includes/DiamondTrap.hpp"
#include <iostream>

int	main()
{
	DiamondTrap	diamond1;
	DiamondTrap	diamond2("Prezioso");
	diamond1.attack("Jack");
	diamond2.attack("Jack");
	diamond1.whoAmI();
	for (int i = 0; i < 50; i++)
		diamond2.whoAmI();
	diamond2.takeDamage(10);
	diamond2.takeDamage(95);
	diamond2.attack("Jack");
	return (0);
}