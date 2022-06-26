//
// Created by John Nappa on 3/28/22.
//

#ifndef CPP02_POINT_HPP
#define CPP02_POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(float x, float y);
	Point(Point &temp);
	Point& operator=(Point &temp);
	Fixed getX() const;
	Fixed getY() const;
private:
	Fixed x;
	Fixed y;
};


#endif //CPP02_POINT_HPP
