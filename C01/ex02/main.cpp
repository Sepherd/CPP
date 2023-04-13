/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:18:25 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:20:12 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;
using std::cout;
using std::endl;

int	main()
{
	string	brain = "HI THIS IS BRAIN";
	string	*stringPTR = &brain;
	string	&stringREF = brain;

	cout << "Indirizzo stringa: " << &brain << endl;
	cout << "Indirizzo tenuto dal puntatore alla stringa: " << stringPTR << endl;
	cout << "Indirizzo tenuto dalla reference alla stringa: " << &stringREF << endl;

	cout << "Valore stringa: " << brain << endl;
	cout << "Valore tenuto dal puntatore alla stringa: " << *stringPTR << endl;
	cout << "Valore tenuto dalla reference alla stringa: " << stringREF << endl;
	
	return (0);
}