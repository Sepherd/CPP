/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/10/31 21:30:31 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Andrea")
{
	_grade = 150;
	std::cout << getName() << " has been hired." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException("1 is the highest possible grade.");
	if (grade > 150)
		throw GradeTooLowException("150 is the lowest possibile grade");
	_grade = grade;
	std::cout << getName() << " has been hired." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << getName() << " has been fired." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original) : _name(original._name)
{
	_grade = original._grade;
	std::cout << getName() +  " copy done." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << this->_name + " operator called." << std::endl;
	this->_grade = other._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException("1 is the highest possible grade.");
	_grade--;
	std::cout << getName() << " new grade is " << getGrade() << std::endl;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException("150 is the lowest possibile grade");
	_grade++;
	std::cout << getName() << " new grade is " << getGrade() << std::endl;
}

void	Bureaucrat::signForm(AForm &f)
{
	if (this->getGrade() > f.getGradeToSign())
	{
		std::cout << this->getName() << " can't sign " << f.getName() << " because the grade is too low." << std::endl;
	}
	if (f.getIsSigned() == false)
	{
		f.beSigned(*this);
		std::cout << this->getName() << " sign " << f.getName() << "." << std::endl;
	}
	else
		std::cout << f.getName() << " is already signed." << std::endl;
}

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureacrat grade " << obj.getGrade();
    return (os);
}