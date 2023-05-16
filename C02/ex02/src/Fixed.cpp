#include "../includes/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : FixNum(0)
{
}

Fixed::Fixed(const int value)
{
    FixNum = value << Fixed::Bits;
}

Fixed::Fixed(const float value)
{
    FixNum = roundf(value * (1 << Fixed::Bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &original)
{
	*this = original;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
    if (this != &assign)
		this->FixNum = assign.FixNum;
    return (*this);
}

int Fixed::getRawBits()
{
    return (FixNum);
}

void    Fixed::setRawBits(int const raw)
{
    FixNum = raw;
}

int Fixed::toInt() const
{
    return (FixNum >> Fixed::Bits);
}

float   Fixed::toFloat() const
{
    return ((float)FixNum / (1 << Fixed::Bits));
}

std::ostream &operator <<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

bool Fixed::operator>(const Fixed& other) const
{
	return this->FixNum > other.FixNum;
}

bool Fixed::operator<(const Fixed& other) const
{
	return other > *this;
}

bool Fixed::operator>=(const Fixed& other) const
{
   	return !(other > *this);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return !(*this > other);
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->FixNum == other.FixNum;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return !(this->FixNum == other.FixNum);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed res;

	res.FixNum = (this->FixNum + other.FixNum);
	return res;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed res;

	res.FixNum = (this->FixNum - other.FixNum);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

Fixed& Fixed::operator++()
{
	++(this->FixNum);
	return (*this);
}

Fixed& Fixed::operator--()
{
	--(this->FixNum);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed prev(*this);

	++(this->FixNum);
	return prev;
}

Fixed Fixed::operator--(int)
{
	Fixed prev(*this);

	--(this->FixNum);
	return prev;
}

Fixed& Fixed::min(Fixed& fr, Fixed& sr)
{
	if (fr < sr)
		return fr;
	return sr;
}

Fixed& Fixed::max(Fixed& fr, Fixed& sr)
{
	if (fr > sr)
		return fr;
	return sr;
}

const Fixed& Fixed::min(const Fixed& fr, const Fixed& sr)
{
	if (fr < sr)
		return fr;
	return sr;
}

const Fixed& Fixed::max(const Fixed& fr, const Fixed& sr)
{
	if (fr > sr)
		return fr;
	return sr;
}