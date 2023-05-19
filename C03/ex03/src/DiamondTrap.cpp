/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:21:46 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 13:08:57 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ScavTrap::ScavTrap(), FragTrap::FragTrap(), ClapTrap::ClapTrap()
{
	Name = "Diamond Problem";
	this->ClapTrap::Name += "_clap_name";
	Hp = FragTrap::Hp;
	Mp = ScavTrap::Mp;
	Power = FragTrap::Power;
	std::cout << "DiamondTrap " + Name + " constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap::ScavTrap(name), FragTrap::FragTrap(name), ClapTrap::ClapTrap(name)
{
	Name = name;
	this->ClapTrap::Name = name + "_clap_name";
	Hp = FragTrap::Hp;
	Mp = ScavTrap::Mp;
	Power = FragTrap::Power;
	std::cout << "DiamondTrap " + Name + " constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " + Name + " destructor" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	Name = original.Name;
	Hp = original.Hp;
	Mp = original.Mp;
	Power = original.Power;
	std::cout << "DiamondTrap " + Name + " copy constructor" << std::endl;
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