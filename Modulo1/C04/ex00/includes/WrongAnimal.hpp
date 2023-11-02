/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:42:12 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:11 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:

		std::string		Type;

	public:

		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &original);

		WrongAnimal &operator=(const WrongAnimal &assign);

		std::string	getType() const;
		void		makeSound() const; //no virtual
};

#endif