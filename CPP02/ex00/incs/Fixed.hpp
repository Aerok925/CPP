#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include "iostream"

class Fixed {
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	Fixed(Fixed &temp);
	~Fixed();
	Fixed& operator=(Fixed &temp);
	int getRawBits(void);
	void setRawBits(int const raw);
};


#endif //CPP02_FIXED_HPP
