/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/31 11:07:06 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <string>
#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:

		std::string	_target;

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &original);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

		void	execute(Bureaucrat const &executor) const;
};

std::ostream &operator <<(std::ostream &os, const ShrubberyCreationForm &obj);

#endif