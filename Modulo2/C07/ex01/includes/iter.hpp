#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

template <typename T, typename F>
void    iter(T &arr, size_t arr_len, F f)
{
	for (size_t i = 0; i < arr_len; i++)
		f(arr[i]);
}

template <typename T>
void	printEl(T &el)
{
	std::cout << std::fixed << std::setprecision(1) << el << " ";
}

template <typename T>
void	addTwoEl(T &el)
{
	el += 2;
}

// template <typename T, typename F>
// void convertEl(T &el)
// {
// 	std::cout << static_cast<F>(el) << " ";
// }

#endif