//
// Created by John Nappa on 3/28/22.
//

#include "../incs/Fixed.hpp"

Fixed::Fixed() {
	std::cout<<"Default constructor called"<<std::endl;
	value = 0;
}

Fixed::Fixed(Fixed &temp) {
	std::cout<<"Copy constructor called"<<std::endl;
	this->value = temp.getRawBits();
}

int Fixed::getRawBits() {
	std::cout<<"getRawBits member function called"<<std::endl;
	return (value);
}

void Fixed::setRawBits(const int raw) {
	std::cout<<"setRawBits member function called"<<std::endl;
	this->value = raw;
}

Fixed &Fixed::operator=(Fixed &temp) {
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->value = temp.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout<<"Destructor called"<<std::endl;
}