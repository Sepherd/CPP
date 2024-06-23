/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 17:46:57 by arecce           ###   ########.fr       */
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
		Bureaucrat burocrate("Lello", 20);
		Intern peppe;
		AForm *robo = peppe.makeForm("robotomy request", "Gigi");
		burocrate.signForm(*robo);
		burocrate.executeForm(*robo);
	
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