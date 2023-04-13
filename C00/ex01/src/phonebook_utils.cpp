/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:30:59 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 15:31:54 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	list_contacts(PhoneBook *pb, int index)
{
	cout << ten_chars(pb->contact[index].getFirstName()) + "|";
	cout << ten_chars(pb->contact[index].getLastName()) + "|";
	cout << ten_chars(pb->contact[index].getNickname()) + "|\n";
}

void	save_contact_info(PhoneBook *pb)
{
	string str;
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
	cout << "\n\033[1;32mContact saved!\033[1;0m\n" << endl;
	pb->nb++;
	pb->i++;
	if (pb->nb > 8) pb->nb = 9;
	if (pb->i > 7) pb->i = 0;
}

void	print_contact(PhoneBook *pb, int i)
{
	cout << "\nFirst name: " << pb->contact[i].getFirstName() + "\n";
	cout << "Last name: " << pb->contact[i].getLastName() + "\n";
	cout << "Nickname: "<< pb->contact[i].getNickname() + "\n";
	cout << "Phone number: " << pb->contact[i].getPhoneNumber() + "\n";
	cout << "Dark secret: " << pb->contact[i].getSecret() + "\n";
	cout << endl;
}

void	print_search(PhoneBook *pb)
{
	int	index = 0;
	if (pb->nb > 1)
	{
		while(1)
		{
			cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
			for (int j = 1; j < pb->nb; j++)
			{
				cout << "|         ";
				cout << j;
				cout << "|";
				list_contacts(pb, j -1);
			}
			cout << "\nType the index of the desired contact: ";
			cin >> index;
			while (cin.fail())
			{
				cout << "\033[1;31mInvalid digit. Type numbers only:\033[1;0m ";
				cin.clear();
				cin.ignore();
				cin >> index;
			}
			cin.ignore();
			if (index < 1 || (index > pb->nb - 1))
				cout << "\033[1;31mIndex out of range.\033[1;0m\n" << endl;
			else
			{
				print_contact(pb, index - 1);
				break ;
			}
		}
	}
	else
		cout << "\033[1;31m\nNo entries!\033[1;0m\n" << endl;
}