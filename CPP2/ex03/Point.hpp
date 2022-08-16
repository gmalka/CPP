#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
	private:
		Fixed x, y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point&);
		~Point();

		Fixed	getX() const;
		Fixed	getY() const;

		void	operator= (const Point &point);
};
bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif
