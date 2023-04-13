/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:16:37 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:16:38 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Zombie
{
	private:

	string Name;

	public:

	void	announce(int n);
	void	setName(string name);
	string	getName();

	Zombie ();
	~Zombie ();
};

Zombie	*zombieHorde(int n, string name);

#endif