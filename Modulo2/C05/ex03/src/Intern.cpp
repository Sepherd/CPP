/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/10/31 21:34:44 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include <iostream>

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(const Intern &original)
{
	*this = original;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	AForm *createdForm = NULL;
	std::string formName[] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	int	i = 0;
	while (formName[i] != form)
		i++;
	switch (i)
	{
	case 0:
		createdForm = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << form << std::endl;
		break ;
	case 1:
		createdForm = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << form << std::endl;
		break ;
	case 2:
		createdForm = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << form << std::endl;
		break ;
	default:
		std::cout << "Intern failed to create a form" << std::endl;
		break ;
	}
	return (createdForm);
}




