/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:12:54 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal()
{
	Type = "Animal";
	std::cout << "I am an Animal constructor." << std::endl;
}

Animal::~Animal()
{
	std::cout << "I am an Animal destructor." << std::endl;

}

Animal::Animal(const Animal &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

Animal &Animal::operator=(const Animal &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return (Type);
}

// void	Animal::makeSound() const
// {
// 	std::cout << Type + " makes loud noises." << std::endl;
// }
