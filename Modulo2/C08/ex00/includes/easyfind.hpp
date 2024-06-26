#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator pos = std::find(container.begin(), container.end(), value);
	if (pos == container.end())
		throw std::out_of_range("Element not found");
	return (pos);
}

#endif