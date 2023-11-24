#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <iomanip>

template <typename T, typename F>
void    iter(T arr, size_t arr_len, F f)
{
	for (size_t i = 0; i < arr_len; i++)
		f(arr[i]);
}

template <typename T>
void	printEl(const T &el)
{
	std::cout << std::fixed << std::setprecision(1) << el << std::endl;
}

template <typename T>
void	doubleEl(T &el)
{
	el += 2;
}

#endif