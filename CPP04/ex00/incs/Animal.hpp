#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include "iostream"

class Animal {
public:
	Animal();
	Animal(const Animal &temp);
	Animal &operator=(const Animal &temp);
	virtual std::string getType() const;
	virtual void makeSound() const;
	virtual ~Animal();
protected:
	std::string type;
};


#endif //CPP04_ANIMAL_HPP
