#include "includes/iter.hpp"

int main()
{
	int	arr[] = {4, 12, 2, 70, 11, 0};
	iter(arr, 6, printEl<int>);
	iter(arr, 6, addTwoEl<int>);
	std::cout << std::endl;
	iter(arr, 6, printEl<int>);
	std::cout << std::endl;

	double	arr2[] = {4.2, 12.1, 2.4, 70.7, 11.0, 0.5};
	iter(arr2, 6, printEl<double>);
	std::cout << std::endl;
	iter(arr2, 6, addTwoEl<double>);
	iter(arr2, 6, printEl<double>);
	std::cout << std::endl;

	char	arr3[] = {'a', 'n', 'd'};
	iter(arr3, 3, printEl<char>);
	std::cout << std::endl;
	iter(arr3, 3, addTwoEl<char>);
	iter(arr3, 3, printEl<char>);
	std::cout << std::endl;

	return 0;
}