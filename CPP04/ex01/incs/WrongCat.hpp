//
// Created by John Nappa on 3/31/22.
//

#ifndef CPP04_WRONGCAT_HPP
#define CPP04_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat &temp);
	virtual ~WrongCat();
	void makeSound() const;
	WrongCat &operator=(const WrongCat &temp);
};


#endif //CPP04_WRONGCAT_HPP
