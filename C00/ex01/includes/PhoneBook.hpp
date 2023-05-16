/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:30:15 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:42:22 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
	
		Contact contact[8];
		int nb, i;
};

void		list_contacts(PhoneBook *pb, int index);
void		save_contact_info(PhoneBook *pb);
void		print_contact(PhoneBook *pb, int i);
void		print_search(PhoneBook *pb);
std::string	get_cmd(std::string cmd);
std::string	get_input(std::string str, std::string field);
std::string	ten_chars(std::string str);

#endif