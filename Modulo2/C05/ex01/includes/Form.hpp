/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/19 17:31:29 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
#include <string>

class Form
{
	private:

		std::string const	_name;
		bool				_isSigned = false;
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
		
		void				beSigned(Bureaucrat b);

		class GradeTooHighException : public std::exception
		{
			private:
				
				std::string		message;
				
			public:
			
				GradeTooHighException(std::string msg) : message(msg) {}
				std::string	what()
				{
					return (message);
				}
		};

		class GradeTooLowException : public std::exception
		{
			private:
				std::string		message;
			public:

				GradeTooLowException(std::string msg) : message(msg) {}
				std::string what()
				{
					return (message);
				}	
		};
};

std::ostream &operator <<(std::ostream &os, Form &obj);

#endif