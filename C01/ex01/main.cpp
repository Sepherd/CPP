/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:16:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/11 18:24:07 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie	*zombieHorde(int n, string name);

int	main()
{
	Zombie *orda = zombieHorde(3, "Zombie");
	delete[] orda;
	return (0);
}