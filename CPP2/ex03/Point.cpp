#include "Point.hpp"

Point::Point()
{
	x = Fixed(0);
	y = Fixed(0);
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point& point)
{
	*this = point;
}

Point::~Point()
{
	std::cout << "Point with coordinates " << x << ", " << y << " destroyed." << std::endl;
}

void	Point::operator= (const Point &point)
{
	this->x = point.x;
	this->y = point.y;
}

Fixed	Point::getX() const
{
	return this->x;
}

Fixed   Point::getY() const
{
	return this->y;
}
