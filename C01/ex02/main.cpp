/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:18:25 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:38:55 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
;



int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*std::stringPTR = &brain;
	std::string	&std::stringREF = brain;

	std::cout << "Indirizzo std::stringa: " << &brain << std::endl;
	std::cout << "Indirizzo tenuto dal puntatore alla std::stringa: " << std::stringPTR << std::endl;
	std::cout << "Indirizzo tenuto dalla reference alla std::stringa: " << &std::stringREF << std::endl;

	std::cout << "Valore std::stringa: " + brain << std::endl;
	std::cout << "Valore tenuto dal puntatore alla std::stringa: " << *std::stringPTR << std::endl;
	std::cout << "Valore tenuto dalla reference alla std::stringa: " << std::stringREF << std::endl;
	
	return (0);
}