//
// Created by John Nappa on 3/28/22.
//

#include "../incs/Fixed.hpp"

Fixed::Fixed() {
	std::cout<<"Default constructor called"<<std::endl;
	value = 0;
}

Fixed::Fixed(Fixed const &temp) {
	std::cout<<"Copy constructor called"<<std::endl;
	this->value = temp.getRawBits();
}

int Fixed::getRawBits() const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (value);
}

Fixed::Fixed(float value) {
	this->value = roundf(value * (1 << bit));
}

void Fixed::setRawBits(const int raw) {
	std::cout<<"setRawBits member function called"<<std::endl;
	this->value = raw;
}

Fixed &Fixed::operator=(Fixed const &temp) {
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->value = temp.getRawBits();
	return (*this);
}

Fixed::Fixed(int value) {
	this->value = value << this->bit;
}

Fixed::~Fixed() {
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::toInt() const {
	return (this->value >> this->bit);
}

float Fixed::toFloat() const {
	return ((float)(value) / (float)(1 << this->bit));
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
	out << value.toFloat();
	return (out);
}