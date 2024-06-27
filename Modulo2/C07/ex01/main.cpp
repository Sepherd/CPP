#include "includes/iter.hpp"

int main()
{
	int	arr[] = {4, 12, 2, 70, 11, 0};
	size_t	arr_len = sizeof(arr) / sizeof(arr[0]);
	iter(arr, arr_len, printEl<int>);
	iter(arr, arr_len, addTwoEl<int>);
	std::cout << std::endl;
	iter(arr, arr_len, printEl<int>);
	std::cout << std::endl;

	double	arr2[] = {4.2, 12.1, 2.4, 70.7, 11.0, 0.5};
	arr_len = sizeof(arr2) / sizeof(arr2[0]);
	iter(arr2, arr_len, printEl<double>);
	std::cout << std::endl;
	iter(arr2, arr_len, addTwoEl<double>);
	iter(arr2, arr_len, printEl<double>);
	std::cout << std::endl;

	char	arr3[] = {'a', 'n', 'd'};
	arr_len = sizeof(arr3) / sizeof(arr3[0]);
	iter(arr3, arr_len, printEl<char>);
	std::cout << std::endl;
	iter(arr3, arr_len, addTwoEl<char>);
	iter(arr3, arr_len, printEl<char>);
	std::cout << std::endl;

	return 0;
}