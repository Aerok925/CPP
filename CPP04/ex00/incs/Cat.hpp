//
// Created by John Nappa on 3/30/22.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : virtual public  Animal{
public:
	Cat();
	Cat(const Cat &temp);
	virtual ~Cat();
	void makeSound() const;
	Cat &operator=(const Cat &temp);
};


#endif //CPP04_CAT_HPP
