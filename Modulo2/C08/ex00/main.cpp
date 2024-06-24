#include "includes/easyfind.hpp"

int main()
{
	try
	{
		int arr[] = {3, 90, 9, -1, 55};
		std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
		int toFind = 90;
		std::vector<int>::iterator it = easyfind(v, toFind);
		std::cout << "Element " << toFind << " found in pos: " << std::distance(v.begin(), it) << std::endl;
		toFind = -1;
		it = easyfind(v, toFind);
		std::cout << "Element " << toFind << " found in pos: " << std::distance(v.begin(), it) << std::endl;
		toFind = 2;
		it = easyfind(v, toFind);
		std::cout << "Element " << toFind << " found in pos: " << std::distance(v.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}