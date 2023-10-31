/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/30 18:06:46 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

class Bureaucrat;

class AForm
{
	private:

		std::string const	_name;
		bool				_isSigned = false;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:

		AForm();
		AForm(std::string const name, const int toSign, const int toExecute);
		virtual ~AForm();
		AForm(const AForm &original);
		AForm &operator=(const AForm &other);

		std::string			getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		
		void				beSigned(const Bureaucrat &b);
		virtual void		execute(Bureaucrat const &executor) const = 0;

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

		class NotSignedException : public std::exception
		{
			private:
				std::string		message;
			public:

				NotSignedException(std::string msg) : message(msg) {}
				std::string what()
				{
					return (message);
				}
		};

		class AlreadySignedException : public std::exception
		{
			private:
				std::string		message;
			public:

				AlreadySignedException(std::string msg) : message(msg) {}
				std::string what()
				{
					return (message);
				}
		};
};

std::ostream &operator <<(std::ostream &os, AForm &obj);

#endif