/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:13:33 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	Type = "WrongCat";
	std::cout << "I am a WrongCat constructor." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "I am a WrongCat destructor." << std::endl;

}

WrongCat::WrongCat(const WrongCat &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << Type + " meows." << std::endl;
}
