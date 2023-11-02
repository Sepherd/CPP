/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/02 19:37:35 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/Intern.hpp"
#include <iostream>

int	main()
{
	try {
		Bureaucrat signer("Lello", 144);
		Intern peppe;
		AForm *robo = peppe.makeForm("robotomy request", "gino");
		AForm *robot = peppe.makeForm("robotomy requst", "gino");
		// signer.signForm(tree);
		// tree.execute(signer);
		// signer.executeForm(tree);
		// signer.signForm(modulo);
		// std::cout << modulo << std::endl;
	}
	catch (AForm::GradeTooHighException e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::NotSignedException e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::AlreadySignedException e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}