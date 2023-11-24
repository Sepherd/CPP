#include "includes/Template.hpp"

int main()
{
	int	arr[] = {4, 12, 2, 70, 11, 0};
	iter(arr, 6, printEl<int>);
	iter(arr, 6, doubleEl<int>);
	iter(arr, 6, printEl<int>);

	double	arr2[] = {4.2, 12.1, 2.4, 70.7, 11.0, 0.5};
	iter(arr2, 6, printEl<double>);
	iter(arr2, 6, doubleEl<double>);
	iter(arr2, 6, printEl<double>);

	char	arr3[] = {'a', 'n', 'd'};
	iter(arr3, 3, printEl<char>);
	iter(arr3, 3, doubleEl<char>);
	iter(arr3, 3, printEl<char>);

	return 0;
}