#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include "iostream"
#include "Brain.hpp"

class Animal {
public:
	Animal();
	Animal(const Animal &temp);
	Animal &operator=(const Animal &temp);
	virtual std::string getType() const;
	virtual void makeSound() const;
	virtual ~Animal();
	virtual Brain *getBrain( void );
protected:
	std::string type;
};


#endif //CPP04_ANIMAL_HPP
