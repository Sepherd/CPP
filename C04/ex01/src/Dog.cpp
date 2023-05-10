#include "../includes/Dog.hpp"
#include <iostream>

Dog::Dog()
{
	Type = "Dog";
	Brains = new Brain();
	std::cout << "I am a " + Type + " constructor." << std::endl;
}

Dog::~Dog()
{
	delete Brains;
	std::cout << "I am a " + Type + " destructor." << std::endl;

}

Dog::Dog(const Dog &original)
{
	Type = original.Type;
	Brains = original.Brains;
	std::cout << Type +  " copy done." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	this->Type = assign.Type;
	this->Brains = assign.Brains;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << Type + " barks." << std::endl;
}
