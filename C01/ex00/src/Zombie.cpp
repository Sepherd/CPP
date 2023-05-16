/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:15:24 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:38:55 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : Name(name)
{
}

Zombie::~Zombie()
{
	std::cout << Name + " was destroyed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}