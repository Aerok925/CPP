#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int value;
	static const int bit = 3;
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
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif //CPP02_FIXED_HPP
