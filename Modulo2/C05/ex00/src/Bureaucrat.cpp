/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:27:55 by arecce            #+#    #+#             */
/*   Updated: 2024/03/06 18:28:23 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

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
		throw GradeTooLowException("150 is the lowest possibile grade.");
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
		throw GradeTooLowException("150 is the lowest possibile grade.");
	_grade++;
	std::cout << getName() << " new grade is " << getGrade() << std::endl;
}

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureacrat grade " << obj.getGrade();
    return (os);
}