#include "Fixed.hpp"

const int Fixed::bit_number = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	store = 0;
}

Fixed::Fixed(Fixed &taken)
{
	std::cout << "Copy constructor called" << std::endl;
	this->store = taken.getRawBits();
}

void	Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	store = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Fixed number is destroyed;(" << std::endl;
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
