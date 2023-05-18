/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:23:13 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 19:15:20 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	Name = "Scavatrice Pazza";
	Hp = 100;
	Mp = 50;
	Power = 20;
	std::cout << "ScavTrap " + Name + " constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	Name = name;
	Hp = 100;
	Mp = 50;
	Power = 20;
	std::cout << "ScavTrap " + Name + " constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + Name + " destructor" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &original)
{
	Name = original.Name;
	Hp = original.Hp;
	Mp = original.Mp;
	Power = original.Power;
	std::cout << "ScavTrap " + Name + " copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	this->Name = assign.Name;
	this->Hp = assign.Hp;
	this->Mp = assign.Mp;
	this->Power = assign.Power;
	std::cout << "ScavTrap " + this->Name + " operator called." << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (Hp > 0)
	{
		if (Mp > 0)
		{
			Mp--;
			std::cout << "ScavTrap " + Name + " is in keeper gate mode." << std::endl;

		}
		else
			std::cout << "ScavTrap " + Name + " can't enter in keeper gate mode because it has no more MP." << std::endl;
	}
	else
		std::cout << "ScavTrap " + Name + " can't enter in keeper gate because it has no more HP." << std::endl;
}