/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:21:24 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:21:25 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

HumanA::HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon) 
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	cout << _name << " attacks with his " << _weapon.getType() << endl;
}