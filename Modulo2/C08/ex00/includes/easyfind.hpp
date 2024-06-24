#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator pos = std::find(container.begin(), container.end(), value);
	if (pos == container.end())
		throw std::runtime_error("Element not found");
	return (pos);
}

#endif