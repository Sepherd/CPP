/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/18 13:47:09 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
	private:

		Brain	*Brains;

	public:

		Cat();
		~Cat();
		Cat(const Cat &original);

		Cat &operator=(const Cat &assign);

		void		makeSound() const;
		std::string	getType() const;
		void		setIdeas(std::string str, int i) const;
		std::string	getIdea(int n) const;
};

#endif