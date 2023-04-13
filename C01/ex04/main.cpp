/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:22:53 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:22:54 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
using std::string;
using std::cout;
using std::endl;

string	substitute(string str, string s1, string s2)
{
	while (str.find(s1) != string::npos)
	{
		std::size_t pos = str.find(s1);
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		cout << "Invalid number of arguments." << endl;
	else
	{
		string	myFile;
		string	filename = av[1]; string s1 = av[2]; string s2 = av[3];
		std::ifstream	readFile(filename);
		std::ofstream	writeFile(filename + ".replace");
		std::getline(readFile, myFile);
		writeFile << substitute(myFile, s1, s2);
		while (std::getline(readFile, myFile))
		{
			if (!myFile.empty())
			{
				myFile.insert(0, "\n");
				writeFile << substitute(myFile, s1, s2);
			}
			
		}
		
	}
	//readFile.close();	
	return (0);
}