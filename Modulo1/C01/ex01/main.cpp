/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:16:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:37:15 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int	main()
{
	Zombie *orda = zombieHorde(5, "Zombie");
	delete[] orda;
	return (0);
}