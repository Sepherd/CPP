#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	
	public:
	
	Contact contact[8];
	int nb, i;
};

void	list_contacts(PhoneBook *pb, int index);
void	save_contact_info(PhoneBook *pb);
void	print_contact(PhoneBook *pb, int i);
void	print_search(PhoneBook *pb);
string	get_cmd(string cmd);
string	get_input(string str, string field);
string	ten_chars(string str);

#endif