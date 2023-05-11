/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:17:10 by arecce            #+#    #+#             */
/*   Updated: 2023/05/11 18:24:51 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << Name + " was destroyed!" << endl;
}

void	Zombie::setName(string name)
{
	Name = name;
}

string	Zombie::getName()
{
	return Name;
}

void	Zombie::announce(int n)
{
	cout << Name << " " << n + 1 << endl;
}