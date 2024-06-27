/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/23 17:33:51 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SPAN_HPP
#define  SPAN_HPP

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <ctime>

class  Span
{
	private:

		std::vector<int>	_v;
		unsigned int		_max;

	public:

		Span();
		Span(unsigned int n);
		Span(const  Span &original);
		Span &operator=(const  Span &other);
		~Span();

		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
};

#endif