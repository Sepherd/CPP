#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	
	std::string	First_name;
	std::string	Last_name;
	std::string	Nickname;
	std::string	Phone_number;
	std::string	Secret;

	public:

	void	setFirstName(std::string first_name) {
		First_name = first_name;
	}

	std::string	getFirstName() {
		return First_name;
	}

	void	setLastName(std::string last_name) {
		Last_name = last_name;
	}

	std::string	getLastName() {
		return Last_name;
	}

	void	setNickname(std::string nickname) {
		Nickname = nickname;
	}

	std::string	getNickname() {
		return Nickname;
	}

	void	setPhoneNumber(std::string phone_number) {
		Phone_number = phone_number;
	}

	std::string	getPhoneNumber() {
		return Phone_number;
	}

	void	setSecret(std::string secret) {
		Secret = secret;
	}

	std::string	getSecret() {
		return Secret;
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
		std::cout << ten_chars(First_name) + "|";
		std::cout << ten_chars(Last_name) + "|";
		std::cout << ten_chars(Nickname) + "|\n";
	}
};

#endif