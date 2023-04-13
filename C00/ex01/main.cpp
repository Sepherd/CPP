/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:34:03 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 15:34:03 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int	main()
{
	PhoneBook pb;
	pb.nb = 1, pb.i = 0;
	
	cout << "\033[1;34m\n| RUBRIKA |\033[1;0m\n" << endl;
	while (1)
	{
		string cmd;
		cmd = get_cmd(cmd);
		if (cmd == "ADD")
		{
			cout << "- New contact -\n\n";
			save_contact_info(&pb);
		}
		else if (cmd == "SEARCH")
			print_search(&pb);
		else if (cmd == "EXIT")
			break ;
		else
			cout << "\033[1;31mInvalid command.\n\033[1;0m" << endl;
	}
	cout << "Bye bye." << endl;
	return (0);
}