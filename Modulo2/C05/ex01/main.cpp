/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 16:37:28 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"
#include <iostream>

int	main()
{
	try {
		Form	modulo("F24", 10, 50);
		Bureaucrat signer("Lello", 7);
		std::cout << modulo << std::endl;
		signer.signForm(modulo);
		modulo.beSigned(signer);
		// signer.signForm(modulo);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	modulo("F24", 0, 145);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Form	modulo("F24", 10, 155);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}