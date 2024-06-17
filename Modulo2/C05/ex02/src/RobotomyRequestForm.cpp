/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2024/06/17 23:17:23 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <iostream>

// RobotomyRequestForm::RobotomyRequestForm() : _target("Wood"), AForm()
// {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target), AForm("Shrubbery", 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : _target(original._target), AForm(original)
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
		throw NotSignedException(getName() + " is not signed.");
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException(executor.getName() + " grade is too low.");
	std::random_device rd;
	std::mt19937 gen(rd());
	std::bernoulli_distribution distribution(0.5);
	bool num = distribution(gen);
	if (num)
	{
		std::cout << "Drilling noises...\n";
		std::cout << _target << " successfully robotomized." << std::endl;
	}
	else
		std::cout << _target << " robotomy failed." << std::endl;
}




