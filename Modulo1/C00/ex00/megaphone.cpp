/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:14:15 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 15:14:15 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int	main(int ac, char **av)
{
	int i = 1;
	int k;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		while (i < ac)
		{
			k = 0;
			while (av[i][k])
			{
				std::cout << (char)(toupper(av[i][k]));
				k++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}