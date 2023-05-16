/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:18:25 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 19:19:30 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Indirizzo stringa: " << &brain << std::endl;
	std::cout << "Indirizzo tenuto dal puntatore alla stringa: " << stringPTR << std::endl;
	std::cout << "Indirizzo tenuto dalla reference alla stringa: " << &stringREF << std::endl;

	std::cout << "Valore std::stringa: " + brain << std::endl;
	std::cout << "Valore tenuto dal puntatore alla stringa: " << *stringPTR << std::endl;
	std::cout << "Valore tenuto dalla reference alla stringa: " << stringREF << std::endl;
	
	return (0);
}