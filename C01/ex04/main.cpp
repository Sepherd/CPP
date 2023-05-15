/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:22:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/15 16:19:32 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
using std::string;
using std::cout;
using std::endl;

int	check_words(std::ifstream &read, string str)
{
	string	file;
	while (std::getline(read, file))
	{
		if (file.empty())
		{
			cout << "File is empty!" << endl;
			return (0);
		}
	}
	if (file.find(str) != string::npos)
	{
		read.close();
		return (1);
	}
	cout << "Word not found!" << endl;
	read.close();
	return (0);
}

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
		if (readFile.is_open())
		{
			if (check_words(readFile, s1))
			{
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
				//readFile.close();
			}
		}
		else
			cout << "File not found!" << endl;
	}
	return (0);
}