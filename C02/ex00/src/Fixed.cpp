#include "../includes/Fixed.hpp"
#include <iostream>

Fixed::Fixed() : FixNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original) : FixNum(original.FixNum)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
    FixNum = assign.FixNum;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->FixNum);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->FixNum = raw;
}