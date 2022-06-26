#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	Fixed(Fixed const &temp);
	~Fixed();
	Fixed(int value);
	Fixed& operator=(Fixed const &temp);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(float value);
	float toFloat() const;
	int toInt() const;
	friend bool operator==(const Fixed &left, const Fixed &right);
	friend bool operator>(const Fixed &left, const Fixed &right);
	friend bool operator<(const Fixed &left, const Fixed &right);
	friend bool operator<=(const Fixed &left, const Fixed &right);
	friend bool operator>=(const Fixed &left, const Fixed &right);
	friend bool operator!=(const Fixed &left, const Fixed &right);
	Fixed operator+(Fixed const &right);
	Fixed operator-(Fixed const &right);
	Fixed operator*(Fixed const &right);
	Fixed operator/(Fixed const &right);
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif //CPP02_FIXED_HPP
