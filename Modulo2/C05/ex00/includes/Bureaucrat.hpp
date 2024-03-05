/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/03/05 14:34:47 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <string>

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
			public:
				std::string	what()
				{
					return ("1 is the highest possible grade.");
				}
		};

		class GradeTooLowException : public std::exception
		{

			public:
				std::string	what()
				{
					return ("150 is the lowest possibile grade.");
				}
		};
};

std::ostream &operator <<(std::ostream &os, const Bureaucrat &obj);

#endif