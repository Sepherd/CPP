/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/19 17:37:16 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"
#include <iostream>

int	main()
{
	try {
		Form	modulo("F24", 10, 50);
		Bureaucrat signer("Lello", 5);
		modulo.beSigned(signer);
		std::cout << modulo << std::endl;
	}
	catch (Form::GradeTooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}