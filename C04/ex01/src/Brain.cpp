#include "../includes/Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor." << std::endl;

}

Brain::Brain(const Brain &original)
{
	*Ideas = *original.Ideas;
	std::cout << "Brain copy done." << std::endl;
}

Brain &Brain::operator=(const Brain &assign)
{
	*this->Ideas = *assign.Ideas;
	std::cout << "Brain operator called." << std::endl;
	return (*this);
}