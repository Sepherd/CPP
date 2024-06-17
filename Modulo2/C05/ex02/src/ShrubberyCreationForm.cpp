/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2024/06/17 23:18:09 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

// ShrubberyCreationForm::ShrubberyCreationForm() : _target("Wood"), AForm()
// {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target), AForm("Shrubbery Creation", 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : _target(original._target), AForm(original)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw NotSignedException(getName() + " is not signed.");
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException(executor.getName() + " grade is too low.");
    std::ofstream   file;
    file.open(_target + "_shrubbery");
    if (file.is_open())
    {
        file << "    _\\/_\n";
        file << "     /\\\n";
        file << "     /\\\n";
        file << "    /  \\\n";
        file << "    /~~\\o\n";
        file << "   /o   \\\n";
        file << "  /~~*~~~\\\n";
        file << " o/    o \\\n";
        file << " /~~~~~~~~\\~`\n";
        file << "/__*_______\\\n";
        file << "     ||\n";
        file << "   \\====/\n";
        file << "    \\__/" << std::endl;

        if (!file.good())
            std::cerr << "Writing error." << std::endl;
        file.close();
        std::cout << "A tree has been planted." << std::endl;
    }
    else
        std::cerr << "Unable to open file." << std::endl;
}




