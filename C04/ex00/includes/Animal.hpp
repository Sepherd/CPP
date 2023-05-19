/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 18:42:59 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/*
Polimorfismo
Consente a un oggetto di una classe derivata di essere trattato come un oggetto di una classe base.
Puoi chiamare metodi o accedere ai membri dell'oggetto attraverso puntatori o riferimenti alla classe base, senza conoscere il tipo reale dell'oggetto.
Ciò permette di scrivere codice che si applica in modo generico a diverse classi derivate.
*/

#include <string>

class Animal
{
	protected:

		std::string		Type;

	public:

		Animal();
		virtual ~Animal(); //in caso di classe base polimorfica è buona prassi dichirare il distruttore come virtual così i distruttori delle classi derivate vengono chiamati correttamente
		Animal(const Animal &original);

		Animal &operator=(const Animal &assign);

		std::string			getType() const;
		virtual void		makeSound() const;
};

#endif