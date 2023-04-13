/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:17:15 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:17:16 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie	*zombieHorde(int n, string name)
{
	Zombie	*forTheHorde = new Zombie[n];
	
	for (int i = 0; i < n; i++)
	{
		forTheHorde[i].setName(name);
		forTheHorde[i].announce(i);
	}
	return (forTheHorde);
}