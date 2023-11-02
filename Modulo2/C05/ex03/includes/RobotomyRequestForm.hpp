/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/10/31 11:07:06 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <string>
#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	private:

		std::string	_target;

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &original);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

		void	execute(Bureaucrat const &executor) const;
};

std::ostream &operator <<(std::ostream &os, const RobotomyRequestForm &obj);

#endif