/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:22:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:52:13 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	substitute(std::string str, std::string s1, std::string s2)
{
	while (str.find(s1) != std::string::npos)
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
		std::cout << "Invalid number of arguments." << std::endl;
	else
	{
		std::string	myFile;
		std::string	filename = av[1]; std::string s1 = av[2]; std::string s2 = av[3];
		std::ifstream	readFile(filename);
		if (readFile.is_open())
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
			readFile.close();
			writeFile.close();
		}
		else
			std::cout << "File not found!" << std::endl;
	}
	return (0);
}