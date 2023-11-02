/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:42:46 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 18:42:49 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
	public:

		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &original);

		WrongCat &operator=(const WrongCat &assign);

		void	makeSound() const;
};

#endif