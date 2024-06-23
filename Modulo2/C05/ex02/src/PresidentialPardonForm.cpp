/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 17:27:24 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

// PresidentialPardonForm::PresidentialPardonForm() : _target("Wood"), AForm()
// {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) : AForm(original), _target(original._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw NotSignedException(getName() + " is not signed.");
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException(executor.getName() + " grade is too low.");
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}




