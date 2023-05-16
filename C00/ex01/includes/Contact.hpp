/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:29:42 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:42:22 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		
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
			return (First_name);
		}

		void	setLastName(std::string last_name) {
			Last_name = last_name;
		}

		std::string	getLastName() {
			return (Last_name);
		}

		void	setNickname(std::string nickname) {
			Nickname = nickname;
		}

		std::string	getNickname() {
			return (Nickname);
		}

		void	setPhoneNumber(std::string phone_number) {
			Phone_number = phone_number;
		}

		std::string	getPhoneNumber() {
			return (Phone_number);
		}

		void	setSecret(std::string secret) {
			Secret = secret;
		}

		std::string	getSecret() {
			return (Secret);
		}
};

#endif