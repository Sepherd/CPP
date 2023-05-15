/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:21:34 by arecce            #+#    #+#             */
/*   Updated: 2023/05/15 21:23:37 by sepherd          ###   ########.fr       */
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
    std::cout << "Weapon destructor" << std::endl;
}

void    Weapon::setType(string type)
{
    _type = type;
}

const string &Weapon::getType()
{
    return _type;
}