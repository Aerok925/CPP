//
// Created by John Nappa on 3/28/22.
//

#include "../incs/Point.hpp"

Point::Point() {
	x = Fixed(0);
	y = Fixed(0);
}

Point::Point(float x, float y) {
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point &Point::operator=(Point &temp) {
	this->x = temp.x;
	this->y = temp.y;
	return (*this);
}

Point::Point(Point &temp) {
	this->x = temp.x;
	this->y = temp.y;
}

Fixed Point::getX() const{
	return x.toFloat();
}

Fixed Point::getY() const{
	return y.toFloat();
}