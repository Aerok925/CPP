#include "../incs/Fixed.hpp"

int main( void ) {
	Fixed a(21.2f);
	Fixed b(10);
	std::cout<<(a == b)<<std::endl;
	std::cout<<(a > b)<<std::endl;
	std::cout<<(a < b)<<std::endl;
	std::cout<<(a >= b)<<std::endl;
	std::cout<<(a <= b)<<std::endl;
	std::cout<<a + b<<std::endl;
	std::cout<<a - b<<std::endl;
	std::cout<<a / b<<std::endl;
	std::cout<<a * b<<std::endl;
	std::cout<< a++<<std::endl;
	std::cout<< ++a<<std::endl;
	std::cout<< a--<<std::endl;
	std::cout<< Fixed::min(a, b)<<std::endl;
	std::cout<< Fixed::max(a, b)<<std::endl;
	return 0;
}
