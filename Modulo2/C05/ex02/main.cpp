/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/17 23:21:52 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include <iostream>

int	main()
{
	try {
		Bureaucrat signer("Lello", 100);
		ShrubberyCreationForm tree("Happy");
		signer.signForm(tree);
		// tree.execute(signer);
		signer.executeForm(tree);
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