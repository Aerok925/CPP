//
// Created by John Nappa on 3/28/22.
//

#include "../incs/Fixed.hpp"

Fixed::Fixed() {
	value = 0;
}

Fixed::Fixed(Fixed const &temp) {
	this->value = temp.getRawBits();
}

int Fixed::getRawBits() const
{
	return (value);
}

Fixed::Fixed(float value) {
	this->value = roundf(value * (1 << bit));
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

Fixed &Fixed::operator=(Fixed const &temp) {
	this->value = temp.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const &right) {
	return (Fixed(this->toFloat() + right.toFloat()));
}
Fixed Fixed::operator++() {
	this->value = (this->toFloat() + 1) * (1 << bit);
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	this->value = (this->toFloat() + 1) * (1 << bit);
	return (temp);
}

Fixed Fixed::operator--() {
	this->value = (this->toFloat() - 1) * (1 << bit);
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	this->value = (this->toFloat() - 1) * (1 << bit);
	return (temp);
}

Fixed Fixed::operator-(Fixed const &right) {
	return (Fixed(this->toFloat() - right.toFloat()));
}

Fixed Fixed::operator*(Fixed const &right) {
	return (Fixed(this->toFloat() * right.toFloat()));
}

Fixed Fixed::operator/(Fixed const &right) {
	return (Fixed(this->toFloat() / right.toFloat()));
}

Fixed::Fixed(int value) {
	this->value = value << this->bit;
}

Fixed::~Fixed() {}

int Fixed::toInt() const {
	return (this->value >> this->bit);
}

float Fixed::toFloat() const {
	return ((float)(value) / (float)(1 << this->bit));
}

bool operator==(const Fixed &left, const Fixed &right) {
	return (left.value == right.value);
}

bool operator>(const Fixed &left, const Fixed &right) {
	return (left.value > right.value);
}

bool operator<(const Fixed &left, const Fixed &right) {
	return (left.value < right.value);
}

bool operator<=(const Fixed &left, const Fixed &right) {
	return (left.value <= right.value);
}

bool operator>=(const Fixed &left, const Fixed &right) {
	return (left.value >= right.value);
}

bool operator!=(const Fixed &left, const Fixed &right) {
	return (left.value != right.value);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.value < b.value)
		return a;
	return b;
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.value > b.value)
		return a;
	return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a.value < b.value)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a.value > b.value)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
	out << value.toFloat();
	return (out);
}