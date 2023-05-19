/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:26 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:10:27 by arecce           ###   ########.fr       */
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
		void		makeSound() const;
};

#endif