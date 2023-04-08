#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

class Contact {
	
	string	First_name;
	string	Last_name;
	string	Nickname;
	string	Phone_number;
	string	Secret;

	public:

	void	setFirstName(string first_name) {
		First_name = first_name;
	}

	string	getFirstName() {
		return First_name;
	}

	void	setLastName(string last_name) {
		Last_name = last_name;
	}

	string	getLastName() {
		return Last_name;
	}

	void	setNickname(string nickname) {
		Nickname = nickname;
	}

	string	getNickname() {
		return Nickname;
	}

	void	setPhoneNumber(string phone_number) {
		Phone_number = phone_number;
	}

	string	getPhoneNumber() {
		return Phone_number;
	}

	void	setSecret(string secret) {
		Secret = secret;
	}

	string	getSecret() {
		return Secret;
	}
};

#endif