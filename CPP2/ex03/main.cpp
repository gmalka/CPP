#include "Point.hpp"
#include "Fixed.hpp"

int main(void)
{
	std::cout << bsp(Point(1, 1), Point(2, -2), Point(0, 0), Point(1, 0.99f)) << std::endl;
	return 0;
}
