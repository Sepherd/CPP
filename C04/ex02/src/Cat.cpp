#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	Type = "Cat";
	Brains = new Brain();
	std::cout << "I am a Cat constructor." << std::endl;
}

Cat::~Cat()
{
	delete Brains;
	std::cout << "I am a Cat destructor." << std::endl;

}

Cat::Cat(const Cat &original)
{
	Type = original.Type;
	Brains = new Brain(*original.Brains); //deep copy
	std::cout << Type +  " copy done." << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
	this->Type = assign.Type;
	if (this->Brains != assign.Brains)
	{
		delete Brains;
		Brains = new Brain(*assign.Brains);
	} // deep copy dato dinamico
	std::cout << this->Type + " operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << Type + " meows." << std::endl;
}

void	Cat::setIdeas(std::string str, int i) const
{
	Brains->Ideas[i] = str;
}

std::string	Cat::getIdea(int i) const
{
	return (Brains->Ideas[i]);
}