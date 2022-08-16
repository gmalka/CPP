#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed t(1.1f);
	Fixed r(2.2f);
	t = t;
	std::cout << t << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
