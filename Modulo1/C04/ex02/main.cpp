/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:17:43 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongCat.hpp"
#include <iostream>

int	main()
{
	//Errore di compilazione, Animal è astratta e non può essere inizializzata direttamente
	// const Animal animale;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	const Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 10/2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
		delete animals[i];
	Cat *cat1 = new Cat();
	cat1->setIdeas("Idea 1", 0);
	std::cout << "cat1 idea[0]: " + cat1->getIdea(0) << std::endl;
	Cat *cat2 = new Cat;
	std::cout << "cat2 idea[0]: " + cat2->getIdea(0) << std::endl;
	cat1->setIdeas("Idea A", 0);
	std::cout << "cat1 idea[0]: " + cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: " + cat2->getIdea(0) << std::endl;
	*cat2 = *cat1;
	std::cout << "cat2 idea[0]: " + cat2->getIdea(0) << std::endl;
	cat1->setIdeas("Idea 1", 0);
	std::cout << "cat1 idea[0]: " + cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: " + cat2->getIdea(0) << std::endl;
	delete cat1;
	delete cat2;
	return (0);
}