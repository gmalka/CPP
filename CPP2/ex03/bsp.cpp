#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float p1 = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())).toFloat();
	float p2 = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())).toFloat();
	float p3 = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())).toFloat();
	if ((p1 > 0 && p2 > 0 && p3 > 0) || (p1 < 0 && p2 < 0 && p3 < 0))
		return true;
	return false;
}
