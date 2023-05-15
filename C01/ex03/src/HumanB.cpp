/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:21:29 by arecce            #+#    #+#             */
/*   Updated: 2023/05/15 21:22:32 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

HumanB::HumanB(string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	cout << _name << " attacks with his ";
	if (_weapon == nullptr)
		cout << "roundhouse kicks" << endl;
	else
		cout << _weapon->getType() << endl;
}