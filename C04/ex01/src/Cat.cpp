#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	Type = "Cat";
	Brains = new Brain();
	std::cout << "I am a " + Type + " constructor." << std::endl;
}

Cat::~Cat()
{
	delete Brains;
	std::cout << "I am a " + Type + " destructor." << std::endl;

}

Cat::Cat(const Cat &original)
{
	Type = original.Type;
	Brains = original.Brains;
	std::cout << Type +  " copy done." << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
	this->Type = assign.Type;
	this->Brains = assign.Brains;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << Type + " meows." << std::endl;
}
