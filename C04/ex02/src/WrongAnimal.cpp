/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:50 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:13:19 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	Type = "WrongAnimal";
	std::cout << "I am a WrongAnimal constructor." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "I am a WrongAnimal destructor." << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (Type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << Type + " makes loud noises." << std::endl;
}
