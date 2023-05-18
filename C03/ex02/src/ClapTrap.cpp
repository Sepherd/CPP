/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:22:56 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 19:15:20 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	Name = "Sputafuoco";
	Hp = 10;
	Mp = 10;
	Power = 0;
	std::cout << "ClapTrap " + Name + " constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	Name = name;
	Hp = 10;
	Mp = 10;
	Power = 0;
	std::cout << "ClapTrap " + Name + " constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " + Name + " destructor" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	Name = original.Name;
	Hp = original.Hp;
	Mp = original.Mp;
	Power = original.Power;
	std::cout << "ClapTrap " + Name + " copy constructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	this->Name = assign.Name;
	this->Hp = assign.Hp;
	this->Mp = assign.Mp;
	this->Power = assign.Power;
	std::cout << "ClapTrap " + this->Name + " operator called." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (Hp > 0)
	{
		if (Mp > 0)
		{
			Mp--;
			std::cout << "ClapTrap " + Name + " attacks " + target + ", causing " << Power << " points of damage!" << std::endl;
		}
		else
			std::cout << "ClapTrap " + Name + " can't attacks because it has no more MP." << std::endl;
	}
	else
		std::cout << "ClapTrap " + Name + " can't attacks because it has no more HP." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (Hp <= 0)
	{
		std::cout << "Ehi! ClapTrap " + Name + " is already dead! Be mercy :'(" << std::endl;
		return ;
	}
	else if (Hp > 0 && Hp > amount)
	{
		Hp -= amount;
		std::cout << "ClapTrap " + Name + " has received " << amount << " points of damage!\n";
		std::cout << "Residual HP: " << Hp << std::endl;
	}
	else if (Hp > 0 && Hp <= amount)
	{
		Hp = 0;
		std::cout << "ClapTrap " + Name + " has received " << amount << " points of damage and died!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Hp > 0)
	{
		if (Mp > 0)
		{
			Hp += amount;
			Mp--;
			std::cout << "ClapTrap " + Name + " was repaired and gained " << amount << " HP!\n";
			std::cout << "Total HP: " << Hp << std::endl;
		}
		else
			std::cout << "ClapTrap " + Name + " can't be repaired because it has no more MP." << std::endl;
	}
	else
		std::cout << "ClapTrap " + Name + " can't be repaired because it has no more HP." << std::endl;

}