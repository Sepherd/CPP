#include "../includes/Animal.hpp"
#include <iostream>

Animal::Animal()
{
	Type = "Animal";
	std::cout << "I can be any " + Type + " constructor." << std::endl;
}

Animal::~Animal()
{
	std::cout << "I am a " + Type + " destructor." << std::endl;

}

Animal::Animal(const Animal &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

Animal &Animal::operator=(const Animal &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return (Type);
}

void	Animal::makeSound() const
{
	std::cout << Type + " makes loud noises." << std::endl;
}
