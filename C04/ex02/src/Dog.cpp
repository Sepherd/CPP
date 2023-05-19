/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:46 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:10:47 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	Type = "Dog";
	Brains = new Brain();
	std::cout << "I am a Dog constructor." << std::endl;
}

Dog::~Dog()
{
	delete Brains;
	std::cout << "I am a Dog destructor." << std::endl;

}

Dog::Dog(const Dog &original)
{
	Type = original.Type;
	Brains = new Brain(*original.Brains);
	std::cout << Type +  " copy done." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	this->Type = assign.Type;
	if (this->Brains != assign.Brains)
	{
		delete Brains;
		Brains = new Brain(*assign.Brains);
	} // deep copy dato dinamico
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << Type + " barks." << std::endl;
}
