/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/12 12:16:06 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie  *newZombie(string name);
void    randomChump(string name);

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