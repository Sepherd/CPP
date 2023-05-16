/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:17:10 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:38:55 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << Name + " was destroyed!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	Name = name;
}

std::string	Zombie::getName()
{
	return Name;
}

void	Zombie::announce(int n)
{
	std::cout << Name << " " << n + 1 << std::endl;
}