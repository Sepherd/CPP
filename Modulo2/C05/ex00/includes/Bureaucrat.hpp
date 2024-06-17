/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:28:44 by arecce            #+#    #+#             */
/*   Updated: 2024/03/06 18:29:49 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <string>
#include <iostream>
#include <exception>

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

		class GradeTooHighException : public std::exception
		{
			private:

				std::string		message;

			public:
			
				GradeTooHighException(const std::string &msg) : message(msg) {}
				virtual const char* what() const noexcept override {
					return (message.c_str());
				}
		};

		class GradeTooLowException : public std::exception
		{
			private:

				std::string		message;

			public:
			
				GradeTooLowException(const std::string &msg) : message(msg) {}
				virtual const char* what() const noexcept override {
					return (message.c_str());
				}
		};
};

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj);

#endif