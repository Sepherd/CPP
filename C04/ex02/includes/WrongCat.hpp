/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:17 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:10:19 by arecce           ###   ########.fr       */
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