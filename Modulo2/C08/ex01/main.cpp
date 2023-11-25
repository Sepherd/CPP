/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/25 17:39:42 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Span.hpp"

int	main()
{
	try
	{
		Span	s(3);
		s.addNumber(42);
		s.addNumber(60);
		s.addNumber(4);

		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		
		s.addNumber(1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	 try
	 {
		Span s(10000);
		s.addMultipleNumbers(10000);
		
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		
		s.addNumber(10001);
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }
	 try
	 {
		Span s(2);
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }
	 try
	 {
		Span s(2);
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }
	 
}