/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:30:59 by arecce            #+#    #+#             */
/*   Updated: 2023/05/11 15:03:40 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	list_contacts(PhoneBook *pb, int index)
{
	std::cout << ten_chars(pb->contact[index].getFirstName()) + "|";
	std::cout << ten_chars(pb->contact[index].getLastName()) + "|";
	std::cout << ten_chars(pb->contact[index].getNickname()) + "|\n";
}

void	save_contact_info(PhoneBook *pb)
{
	std::string str;
	str = get_input(str, "First name: ");
	pb->contact[pb->i].setFirstName(str);
	str = get_input(str, "Last name: ");
	pb->contact[pb->i].setLastName(str);
	str = get_input(str, "Nickname: ");
	pb->contact[pb->i].setNickname(str);
	str = get_input(str, "Phone number: ");
	pb->contact[pb->i].setPhoneNumber(str);
	str = get_input(str, "Dark secret: ");
	pb->contact[pb->i].setSecret(str);
	std::cout << "\n\033[1;32mContact saved!\033[1;0m\n" << std::endl;
	pb->nb++;
	pb->i++;
	if (pb->nb > 8) pb->nb = 9;
	if (pb->i > 7) pb->i = 0;
}

void	print_contact(PhoneBook *pb, int i)
{
	std::cout << "\nFirst name: " << pb->contact[i].getFirstName() + "\n";
	std::cout << "Last name: " << pb->contact[i].getLastName() + "\n";
	std::cout << "Nickname: "<< pb->contact[i].getNickname() + "\n";
	std::cout << "Phone number: " << pb->contact[i].getPhoneNumber() + "\n";
	std::cout << "Dark secret: " << pb->contact[i].getSecret() + "\n";
	std::cout << std::endl;
}

void	print_search(PhoneBook *pb)
{
	int	index = 0;
	if (pb->nb > 1)
	{
		while(1)
		{
			std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
			for (int j = 1; j < pb->nb; j++)
			{
				std::cout << "|         ";
				std::cout << j;
				std::cout << "|";
				list_contacts(pb, j -1);
			}
			std::cout << "\nType the index of the desired contact: ";
			std::cin >> index;
			while (std::cin.fail())
			{
				std::cout << "\033[1;31mInvalid digit. Type numbers only:\033[1;0m ";
				std::cin.clear();
				std::cin.ignore();
				std::cin >> index;
			}
			std::cin.ignore();
			if (index < 1 || (index > pb->nb - 1))
				std::cout << "\033[1;31mIndex out of range.\033[1;0m\n" << std::endl;
			else
			{
				print_contact(pb, index - 1);
				break ;
			}
		}
	}
	else
		std::cout << "\033[1;31m\nNo entries!\033[1;0m\n" << std::endl;
}