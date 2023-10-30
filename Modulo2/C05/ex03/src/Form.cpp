/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:12:54 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include <iostream>

AForm::AForm() : _name("Modello 730"), _gradeToSign(10), _gradeToExecute(75)
{
	std::cout << getName() << " has been created." << std::endl;
}

AForm::AForm(std::string const name, const int toSign, const int toExecute) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExecute)
{
	if (toSign < 1)
		throw GradeTooHighException("Highest grade to sign " + getName() + " is 1");
	if (toExecute < 1)
		throw GradeTooHighException("Highest grade to execute " + getName() + " is 1");
	if (toSign > 150)
		throw GradeTooLowException("Lowest grade to sign " + getName() + " is 150");
	if (toExecute > 150)
		throw GradeTooLowException("Lowest grade to execute " + getName() + " is 150");
	std::cout << getName() << " has been created." << std::endl;
}

AForm::~AForm()
{
	std::cout << getName() << " has been destroyed." << std::endl;
}

AForm::AForm(const AForm &original) : _name(original._name), _gradeToSign(original._gradeToSign), _gradeToExecute(original._gradeToExecute)
{
	std::cout << getName() +  " copy done." << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << this->_name + " operator called." << std::endl;
	return (*this);
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned()
{
	return (_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException(b.getName() + " grade is too low.");
	if (this->_isSigned == false)
		this->_isSigned = true;
	else
		std::cout << this->getName() << " is already signed." << std::endl;
}

std::ostream &operator <<(std::ostream &os, AForm &obj)
{
    os << "AForm name: " << obj.getName() << "\nisSigned: " << obj.getIsSigned() << "\ngradeToSign: " << obj.getGradeToSign() << "\ngradeToExecute: " << obj.getGradeToExecute();
    return (os);
}