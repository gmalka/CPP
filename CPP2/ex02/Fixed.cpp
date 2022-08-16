#include <cmath>
#include "Fixed.hpp"

const int Fixed::bit_number = 8;

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	store = 0;
}

Fixed::Fixed(const Fixed &taken)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->store = taken.getRawBits();
}

void Fixed::operator= (const Fixed& fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	store = fixed.getRawBits();
}

Fixed::~Fixed()
{
//std::cout << "Fixed number is destroyed;(" << std::endl;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called" << std::endl;
	this->store = (value << Fixed::bit_number);
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called" << std::endl;
	this->store = roundf(value * (1 << Fixed::bit_number));
}

float Fixed::toFloat(void) const
{
	return float((float)this->store / (float)(1 << Fixed::bit_number));
}

int Fixed::toInt(void) const
{
	return (this->store >> Fixed::bit_number);
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
	//std::cout << "getRawBits member function called" << std::endl;
	return store;
}

bool	operator< (const Fixed &c1, const Fixed &c2)
{
	if (c1.getRawBits() < c2.getRawBits())
		return true;
	return false;
}

bool    operator> (const Fixed &c1, const Fixed &c2)
{
    if (c1.getRawBits() > c2.getRawBits())
        return true;
    return false;
}

bool	operator>= (const Fixed &c1, const Fixed &c2)
{
	if (c1.getRawBits() < c2.getRawBits())
		return false;
	return true;
}

bool	operator<= (const Fixed &c1, const Fixed &c2)
{
	if (c1.getRawBits() > c2.getRawBits())
		return false;
	return true;
}

bool	operator== (const Fixed &c1, const Fixed &c2)
{
	if (c1.getRawBits() == c2.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!= (const Fixed &c2)
{
	if (this->getRawBits() != c2.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+ (const Fixed &c2)
{
	return Fixed(this->toFloat() + c2.toFloat());
}

Fixed	Fixed::operator- (const Fixed &c2)
{
	return Fixed(this->toFloat() - c2.toFloat());
}

Fixed	Fixed::operator/ (const Fixed &c2)
{
	if (c2.getRawBits() == 0)
	{
		std::cout << "Cannot divide by zero" << std::endl;
		return *this;
	}
	return Fixed(this->toFloat() / c2.toFloat());
}

Fixed	Fixed::operator* (const Fixed &c2)
{
	return Fixed(this->toFloat() * c2.toFloat());
}

Fixed	&Fixed::operator-- ()
{
	this->store--;
	return *this;
}

Fixed	&Fixed::operator++ ()
{
	this->store++;
	return *this;
}

Fixed	Fixed::operator-- (int)
{
	Fixed newFixed(*this);
	(this->store)++;
	return newFixed;
}

Fixed	Fixed::operator++ (int)
{
	Fixed newFixed(*this);
    (this->store)++;
    return newFixed;
}

Fixed&	Fixed::min(Fixed &First, Fixed &Second)
{
	if (First >= Second)
		return Second;
	return First;
}

const Fixed&	Fixed::min(const Fixed& First, const Fixed& Second)
{
	if (First >= Second)
		return Second;
	return First;
}

Fixed&	Fixed::max(Fixed &First, Fixed &Second)
{
    if (First <= Second)
        return Second;
    return First;
}

const Fixed&	Fixed::max(const Fixed& First, const Fixed& Second)
{
    if (First <= Second)
        return Second;
    return First;
}
