//
// Created by John Nappa on 3/31/22.
//

#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal{
private:
	Brain brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog&temp);
	Dog &operator=(const Dog&temp);
	void makeSound() const;
	Brain *getBrain(void);
};


#endif //CPP04_DOG_HPP
