/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:16:37 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 19:17:10 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:

		std::string Name;

	public:

		void	announce(int n);
		void	setName(std::string name);
		std::string	getName();
	
		Zombie ();
		~Zombie ();
};

#endif