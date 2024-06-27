/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/27 16:23:36 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int	main()
{
	try
	{
		Span	s(9);
		s.addNumber(42);
		s.addNumber(60);
		s.addNumber(5);


		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		
		int	arr[] = {4, 12, 2, 70, 11, 0};
		std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
		
		s.addNumber(vec.begin(), vec.end());

		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;

		int	arr2[] = {102, 34, 2};
		std::vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

		s.addNumber(vec2.begin(), vec2.end());		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span	s(3);
		s.addNumber(42);
		s.addNumber(60);
		s.addNumber(5);
		s.addNumber(98);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}