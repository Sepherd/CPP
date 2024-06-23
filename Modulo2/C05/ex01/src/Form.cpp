/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:12:54 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include <iostream>

Form::Form() : _name("Modello 730"), _gradeToSign(10), _gradeToExecute(75)
{
	_isSigned = false;
	std::cout << getName() << " has been created." << std::endl;
}

Form::Form(std::string const name, const int toSign, const int toExecute) : _name(name), _gradeToSign(toSign), _gradeToExecute(toExecute)
{
	if (toSign < 1)
		throw GradeTooHighException("Highest grade to sign " + getName() + " is 1");
	if (toExecute < 1)
		throw GradeTooHighException("Highest grade to execute " + getName() + " is 1");
	if (toSign > 150)
		throw GradeTooLowException("Lowest grade to sign " + getName() + " is 150");
	if (toExecute > 150)
		throw GradeTooLowException("Lowest grade to execute " + getName() + " is 150");
	_isSigned = false;
	std::cout << getName() << " has been created." << std::endl;
}

Form::~Form()
{
	std::cout << getName() << " has been destroyed." << std::endl;
}

Form::Form(const Form &original) : _name(original._name), _gradeToSign(original._gradeToSign), _gradeToExecute(original._gradeToExecute)
{
	std::cout << getName() +  " copy done." << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << this->_name + " operator called." << std::endl;
	if (this != &other)
		this->_isSigned = other._isSigned;
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned()
{
	return (_isSigned);
}

int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException(b.getName() + " grade is too low for signing " + this->getName() + ".");
	if (this->_isSigned == false)
		this->_isSigned = true;
	else
		std::cout << this->getName() << " is already signed." << std::endl;
}

std::ostream &operator <<(std::ostream &os, Form &obj)
{
    os << "Form name: " << obj.getName() << "\nisSigned: " << obj.getIsSigned() << "\ngradeToSign: " << obj.getGradeToSign() << "\ngradeToExecute: " << obj.getGradeToExecute();
    return (os);
}