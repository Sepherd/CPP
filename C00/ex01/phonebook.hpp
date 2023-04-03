#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact {
	
	public:

	void	GetFirstName() {
		std::cin >> first_name;
	}

	void	GetLastName() {
		std::cin >> last_name;
	}

	void	GetNickname() {
		std::cin >> nickname;
	}

	void	GetPhoneNumber() {
		std::cin >> phone_number; //check numero
	}

	void	GetSecret() {
		std::cin >> secret;
	}

	private: 

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	int				phone_number;
	std::string		secret;

};

#endif