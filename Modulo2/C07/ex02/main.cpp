#include "includes/Array.hpp"

int	main()
{
	Array<int>	a(5);
	Array<int>	b;

	std::cout << "a\n"; 
	for(unsigned int i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << a[i] << std::endl;
	}

	b = a;
	std::cout << "b\n"; 
	for(unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	b[0] = 42;
	std::cout << "b\n"; 
	for(unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
	std::cout << "a\n";
	for(unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	
	try
	{
		std::cout << a[102] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		a[42] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}