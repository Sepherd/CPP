/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 16:36:32 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#pragma once

#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		std::string const	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &original);
		Bureaucrat &operator=(const Bureaucrat &other);

		std::string			getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		void				signForm(Form &f);

		class GradeTooHighException : public std::exception
		{
			private:

				std::string		message;

			public:
			
				GradeTooHighException(const std::string &msg) : message(msg) {}
				~GradeTooHighException() throw() {}
				virtual const char* what() const throw() {
					return (message.c_str());
				}
		};

		class GradeTooLowException : public std::exception
		{
			private:

				std::string		message;

			public:
			
				GradeTooLowException(const std::string &msg) : message(msg) {}
				~GradeTooLowException() throw() {}
				virtual const char* what() const throw() {
					return (message.c_str());
				}
		};
};

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj);

#endif