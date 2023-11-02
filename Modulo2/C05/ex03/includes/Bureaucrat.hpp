/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/02 17:03:37 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <string>
#include "AForm.hpp"

class AForm;

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

		void				signForm(AForm &f);
		void				executeForm(AForm const &form);

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
				std::string	what()
				{
					return (message);
				}	
		};
};

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj);

#endif