/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:23:03 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 15:55:38 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	Name = "Bombolo";
	Hp = 100;
	Mp = 100;
	Power = 30;
	std::cout << "FragTrap " + Name + " constructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	Name = name;
	Hp = 100;
	Mp = 100;
	Power = 30;
	std::cout << "FragTrap " + Name + " constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + Name + " destructor" << std::endl;

}

FragTrap::FragTrap(const FragTrap &original)
{
	Name = original.Name;
	Hp = original.Hp;
	Mp = original.Mp;
	Power = original.Power;
	std::cout << "FragTrap " + Name + " copy constructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	this->Name = assign.Name;
	this->Hp = assign.Hp;
	this->Mp = assign.Mp;
	this->Power = assign.Power;
	std::cout << "FragTrap " + this->Name + " operator called." << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (Hp > 0)
	{
		if (Mp > 0)
		{
			Mp--;
			std::cout << "FragTrap " + Name + " wants to high five with you!" << std::endl;
		}
		else
			std::cout << "FragTrap " + Name + " can't high five because it has no more MP." << std::endl;
	}
	else
		std::cout << "FragTrap " + Name + " can't high five because it has no more HP." << std::endl;
}