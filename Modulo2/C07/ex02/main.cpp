#include "includes/Array.hpp"

int	main()
{
	Array<int> a(5);
	Array<int> b;

	std::cout << "Array a size: " << a.size() << std::endl;
	std::cout << "Array b size: " << b.size() << std::endl;

	try
	{
		std::cout << b[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Array a: "; 
	for(unsigned int i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << a[i] << ", ";
	}

	std::cout << std::endl;

	b = a;
	std::cout << "Array b: "; 
	for(unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << ", ";
	
	std::cout << std::endl;

	b[0] = 42;
	std::cout << "Array b: "; 
	for(unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << ", ";
	std::cout << std::endl;
	std::cout << "Array a: ";
	for(unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << ", "; 
	std::cout << std::endl;

	Array<int> c(a);
	std::cout << "Array c: ";
	for(unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << ", ";
	std::cout << std::endl;
	c[0] = 42;
	std::cout << "Array c: ";
	for(unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << ", ";
	std::cout << std::endl;
	std::cout << "Array a: ";
	for(unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << ", ";
	std::cout << std::endl;

	
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

	return (0);
}