//
// Created by John Nappa on 3/30/22.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : virtual public  Animal{
private:
	Brain brain;
public:
	Cat();
	Cat(const Cat &temp);
	virtual ~Cat();
	void makeSound() const;
	Cat &operator=(const Cat &temp);
	Brain *getBrain(void);
};


#endif //CPP04_CAT_HPP
