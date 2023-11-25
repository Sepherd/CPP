#include "includes/EasyFind.hpp"

int main()
{
	try
	{
		std::vector<int> v = {3, 90, 9, -1, 55};
		auto find = easyfind(v, 90);
		std::cout << "Element found in vector: " << *find << std::endl;
		find = easyfind(v, 55);
		std::cout << "Element found in vector: " << *find << std::endl;
		find = easyfind(v, 2);
		std::cout << "Element found in vector: " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}