/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/18 22:34:35 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try {
		Bureaucrat boss("Gertrude", 2); //Il distruttore si attiva al termine del blocco try (lo scope di boss), quindi prima che l'eccezione si attivi 
		std::cout << boss << std::endl;
		boss.incrementGrade();
		boss.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try {
		Bureaucrat officeBoy("Osvaldo", 149);
		std::cout << officeBoy << std::endl;
		officeBoy.decrementGrade();
		officeBoy.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat recommended("Giusto", 0);
		std::cout << recommended << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat newbie("Ignazio", 189);
		std::cout << newbie << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}