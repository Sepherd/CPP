/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:43:37 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:38 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	Type = "Dog";
	std::cout << "I am a Dog constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "I am a Dog destructor." << std::endl;

}

Dog::Dog(const Dog &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << Type + " barks." << std::endl;
}
