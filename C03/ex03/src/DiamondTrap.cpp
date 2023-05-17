/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:21:46 by arecce            #+#    #+#             */
/*   Updated: 2023/05/17 20:26:20 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap()
{
	Name = "Diamond Problem";
	ClapTrap::Name = ClapTrap::Name + "_clap_name";
	Hp = FragTrap::Hp;
	Mp = ScavTrap::Mp;
	Power = FragTrap::Power;
	std::cout << "DiamondTrap " + Name + " ready to destroy!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	Name = name;
	ClapTrap::Name = name + "_clap_name";
	Hp = FragTrap::Hp;
	Mp = ScavTrap::Mp;
	Power = FragTrap::Power;
	std::cout << "DiamondTrap " + Name + " ready to destroy!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " + Name + " was destroyed!" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	Name = original.Name;
	Hp = original.Hp;
	Mp = original.Mp;
	Power = original.Power;
	std::cout << "DiamondTrap " + Name + " copy ready to destroy!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign)
{
	this->Name = assign.Name;
	this->Hp = assign.Hp;
	this->Mp = assign.Mp;
	this->Power = assign.Power;
	std::cout << "DiamondTrap " + this->Name + " operator called." << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	if (Hp > 0)
	{
		if (Mp > 0)
		{
			Mp--;
			std::cout << "DiamondTrap name is: " + Name + "!" << std::endl;
			std::cout << "DiamondTrap ClapTrap name is: " + ClapTrap::Name + "!" << std::endl;
		}
		else
			std::cout << "DiamondTrap " + Name + " can't tell its name because it has no more MP." << std::endl;

	}
	else
		std::cout << "DiamondTrap " + Name + " can't tell its name because it has no more HP." << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}