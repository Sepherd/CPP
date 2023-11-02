/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:37:15 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int	main()
{
	Zombie zombie1("Liv");					//memoria stack
	zombie1.announce();
	Zombie *zombie2 = newZombie("Sheila"); 	//memoria heap - oppure zombie2 = new Zombie("Sheila")
	zombie2->announce();
	randomChump("Frank");					//stack, il suo scope e' la funzione, viene deallocato al termine dell'esecuzione
	delete zombie2;							//la memoria allocata nella memoria heap deve essere deallocata manualmente
	return (0);
}