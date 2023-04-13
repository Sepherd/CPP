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
using std::cout;
using std::endl;

int	main(int ac, char **av)
{
	int i = 1;
	int k;
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		while (i < ac)
		{
			k = 0;
			while (av[i][k])
			{
				cout << (char)(toupper(av[i][k]));
				k++;
			}
			i++;
		}
	}
	cout << endl;
	return (0);
}