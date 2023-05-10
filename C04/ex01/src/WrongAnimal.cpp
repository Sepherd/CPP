#include "../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	Type = "WrongAnimal";
	std::cout << "I can be any " + Type + " constructor." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "I am a " + Type + " destructor." << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (Type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << Type + " makes loud noises." << std::endl;
}
