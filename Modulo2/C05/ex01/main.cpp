/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/19 12:56:07 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"
#include <iostream>

int	main()
{
	try {
		Form	modulo("F24", 0, 50);
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