/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:21:49 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 19:15:20 by sepherd          ###   ########.fr       */
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
		std::cout << "FragTrap " + Name + " wants to high five with you!" << std::endl;
	else
		std::cout << "FragTrap " + Name + " can't high five because it has no more HP." << std::endl;
}