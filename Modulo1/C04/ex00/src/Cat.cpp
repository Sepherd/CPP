/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:43:32 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:33 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	Type = "Cat";
	std::cout << "I am a Cat constructor." << std::endl;
}

Cat::~Cat()
{
	std::cout << "I am a Cat destructor." << std::endl;

}

Cat::Cat(const Cat &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << Type + " meows." << std::endl;
}
