//
// Created by John Nappa on 3/31/22.
//

#ifndef CPP04_WRONGANIMAL_HPP
#define CPP04_WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &temp);
	WrongAnimal &operator=(const WrongAnimal &temp);
	virtual std::string getType() const;
	virtual void makeSound() const;
	virtual ~WrongAnimal();
protected:
	std::string type;
};


#endif //CPP04_WRONGANIMAL_HPP
