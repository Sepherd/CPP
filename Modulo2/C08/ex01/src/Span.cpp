/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:10:35 by arecce            #+#    #+#             */
/*   Updated: 2023/11/24 16:15:39 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() : _max(0)
{}

Span::Span(unsigned int n) : _max(n)
{}

Span::~Span()
{}

Span::Span(const Span &original)
{
	*this = original;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_v = other._v;
		_max = other._max;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_v.size() >= _max)
		throw std::out_of_range("Span is full");
	_v.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	unsigned int range = std::distance(begin, end);
	if (_v.size() + range >= _max)
		throw std::out_of_range("The range to insert exceed the max size of Span");
	_v.insert(_v.end(), begin, end);
}

int	Span::shortestSpan()
{
	if (_v.size() < 2)
		throw std::logic_error("Not enough numbers");
	std::vector<int> sorted = _v;
	std::sort(sorted.begin(), sorted.end());
	int	min = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		int	span = sorted[i] - sorted[i - 1];
		min = std::min(min, span);
	}
	return (min);
}

int	Span::longestSpan()
{
	if (_v.size() < 2)
		throw std::logic_error("Not enough numbers");
	std::vector<int> sorted = _v;
	std::sort(sorted.begin(), sorted.end());
	return (sorted[sorted.size() - 1] - sorted[0]);
}