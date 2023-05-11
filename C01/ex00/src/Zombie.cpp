/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:15:24 by arecce            #+#    #+#             */
/*   Updated: 2023/05/11 18:20:44 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(string name) : Name(name)
{
}

Zombie::~Zombie()
{
	cout << Name + " was destroyed!" << endl;
}

void	Zombie::announce()
{
	cout << Name << ": BraiiiiiiinnnzzzZ..." << endl;
}