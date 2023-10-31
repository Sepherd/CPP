/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/31 11:07:06 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <string>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:

		std::string	_target;

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &original);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

		void	execute(Bureaucrat const &executor) const;
};

std::ostream &operator <<(std::ostream &os, const PresidentialPardonForm &obj);

#endif