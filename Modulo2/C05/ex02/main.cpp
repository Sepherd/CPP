/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 17:34:19 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include <iostream>

int	main()
{
	try {
		Bureaucrat signer("Lello", 5);
		ShrubberyCreationForm tree("Happy");
		RobotomyRequestForm robo("Brain");
		PresidentialPardonForm zap("Tizio");
		signer.signForm(tree);
		signer.signForm(robo);
		signer.signForm(zap);
		signer.executeForm(tree);
		signer.executeForm(robo);
		signer.executeForm(zap);
		signer.signForm(tree);
		Bureaucrat executor("Gigi", 150);
		robo.execute(executor);
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::NotSignedException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::AlreadySignedException &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}