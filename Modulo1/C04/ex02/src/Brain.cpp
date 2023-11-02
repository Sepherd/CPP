/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:39 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:10:40 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor." << std::endl;
}

Brain::~Brain()
{
	//il distruttore di std::string si attiva autonomamente
	std::cout << "Brain destructor." << std::endl;

}

Brain::Brain(const Brain &original)
{
	for (int i = 0; i < 100; i++)
		Ideas[i] = original.Ideas[i]; //Ideas è un array di oggetti string, per questo sono da copiarli singolarmente
	std::cout << "Brain copy done." << std::endl;
}

Brain &Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			Ideas[i] = assign.Ideas[i];
	} //Ideas è un array di oggetti string, per questo sono da copiarli singolarmente
	std::cout << "Brain operator called." << std::endl;
	return (*this);
}