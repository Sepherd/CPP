#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	public:

	void	save_contact_info()
	{
		std::cout << "First name: ";
		std::cin >> first_name;
		std::cout << "Last name: ";
		std::cin >> last_name;
		std::cout << "Nickname: ";
		std::cin >> nickname;
		std::cout << "Phone number: ";
		std::cin >> phone_number;
		std::cout << "Dark secret: ";
		std::cin >> secret;
		std::cout << "\n";
	}

	void	print_contact()
	{
		std::cout << "First name: " << first_name + "\n";
		std::cout << "Last name: " << last_name + "\n";
		std::cout << "Nickname: "<< nickname + "\n";
		std::cout << "Phone number: " << phone_number + "\n";
		std::cout << "Dark secret: " << secret + "\n\n";
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

	void	list_contacts()
	{
		std::cout << ten_chars(first_name) + "|";
		std::cout << ten_chars(last_name) + "|";
		std::cout << ten_chars(nickname) + "|\n";
	}
};

#endif