/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/23 16:48:44 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
{
	private:

		std::string const	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:

		Form();
		Form(std::string const name, const int toSign, const int toExecute);
		~Form();
		Form(const Form &original);
		Form &operator=(const Form &other);

		std::string			getName() const;
		bool				getIsSigned();
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		
		void				beSigned(const Bureaucrat &b);

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

std::ostream &operator <<(std::ostream &os, Form &obj);

#endif