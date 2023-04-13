/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:21:34 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:21:35 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include <iostream>
using std::string;

Weapon::Weapon (string type) : _type(type)
{

}

Weapon::~Weapon()
{
    std::cout << "Unarmed!" << std::endl;
}

void    Weapon::setType(string type)
{
    _type = type;
}

const string &Weapon::getType()
{
    return _type;
}