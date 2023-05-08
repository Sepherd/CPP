#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	Type = "Cat";
	std::cout << "I am a " + Type + "." << std::endl;
}

Cat::~Cat()
{
	std::cout << Type + " was destroyed." << std::endl;

}

Cat::Cat(const Cat &original)
{
	Type = original.Type;
	std::cout << Type +  " copy done." << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
	this->Type = assign.Type;
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << Type + " meows." << std::endl;
}
