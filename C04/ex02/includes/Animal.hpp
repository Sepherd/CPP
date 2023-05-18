/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 16:07:16 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

/*
Una classe abstract è utile per creare un'interfaccia base per le classi derivate.
*/

class Animal
{
	protected:

		std::string		Type;

	public:

		Animal();
		virtual ~Animal();
		Animal(const Animal &original);

		Animal &operator=(const Animal &assign);

		std::string			getType() const;
		virtual void		makeSound() const = 0; //per essere abstract, una classe deve avere almeno un metodo virtuale puro, ovvero il metodo non deve essere inizializzato
};

#endif