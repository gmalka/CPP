#include <cmath>
#include "Fixed.hpp"

const int Fixed::bit_number = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	store = 0;
}

Fixed::Fixed(const Fixed &taken)
{
	std::cout << "Copy constructor called" << std::endl;
	this->store = taken.getRawBits();
}

void Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	store = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Fixed number is destroyed;(" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->store = value << Fixed::bit_number;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->store = roundf(value * (1 << Fixed::bit_number));
}

float Fixed::toFloat(void) const
{
	return float((float)this->store / (float)(1 << Fixed::bit_number));
}

int Fixed::toInt(void) const
{
	return this->store >> Fixed::bit_number;
}

std::ostream& operator<< (std::ostream &os, const Fixed &p)
{
	os << p.toFloat();
	return os;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	store = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return store;
}
