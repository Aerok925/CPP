//
// Created by John Nappa on 3/31/22.
//

#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout<<"Default constructor WrongAnimal called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &temp) {
	std::cout<<"Copy constructor WrongAnimal called"<<std::endl;
	this->type = temp.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &temp) {
	std::cout<<"Assignement operator for WrongAnimal called"<<std::endl;
	this->type = temp.type;
	return(*this);
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout<<"WrongAnimal can make sound"<<std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout<<"Default destructor WrongAnimal called"<<std::endl;
}