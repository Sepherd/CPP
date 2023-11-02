/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:32:59 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:42:22 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

std::string	get_cmd(std::string cmd)
{
	std::cout << "Commands available:\n\n";
	std::cout << "- ADD - to save a new contact,\n";
	std::cout << "- SEARCH - to display a specific contact,\n";
	std::cout << "- EXIT - quit the program.\n\n";
	std::cout << "Enter command: ";
	getline(std::cin, cmd);
	std::cout << std::endl;;
	return (cmd);
}

std::string	get_input(std::string str, std::string field)
{
	while (1)
	{
		std::cout << field;
		getline(std::cin, str);
		if (!str.empty())
			return (str);
		else
			std::cout << "\033[1;31mThe field cannot be empty.\033[1;0m" << std::endl;
	}
}

std::string	ten_chars(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
	{
		int	k = 10 - str.length();
		for (int i = 0; i < k; i++)
			std::cout << " ";
		return (str);
	}
}