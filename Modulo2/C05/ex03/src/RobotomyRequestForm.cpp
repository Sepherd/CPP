/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 17:48:13 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

// RobotomyRequestForm::RobotomyRequestForm() : _target("Wood"), AForm()
// {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : AForm(original), _target(original._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw NotSignedException(getName() + " is not signed");
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException(executor.getName() + " grade is too low");
	std::srand(static_cast<unsigned int>(std::time(0)));
	int num = std::rand() % 2;
	if (num)
	{
		std::cout << "Drilling noises\n";
		std::cout << _target << " successfully robotomized" << std::endl;
	}
	else
		std::cout << _target << " robotomy failed" << std::endl;
}




