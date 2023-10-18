/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/05/19 19:12:54 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
	_grade = 1;
	// std::cout << "I am an Bureaucrat constructor." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name << " has been fired." << std::endl;

}

// Bureaucrat::Bureaucrat(const Bureaucrat &original)
// {
// 	Type = original.Type;
// 	// std::cout << Type +  " copy done." << std::endl;
// }

// Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
// {
// 	this->_name = assign._name;
// 	// std::cout << this->Type + " operator called." << std::endl;
// 	return (*this);
// }

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade()
{
	return (_grade);
}
