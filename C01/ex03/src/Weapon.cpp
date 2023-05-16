/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:21:34 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:42:22 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include <iostream>
;

Weapon::Weapon (std::string type) : _type(type)
{

}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor" << std::endl;
}

void    Weapon::setType(std::string type)
{
    _type = type;
}

const std::string &Weapon::getType()
{
    return _type;
}