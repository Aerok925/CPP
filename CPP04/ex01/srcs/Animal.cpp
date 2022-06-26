//
// Created by John Nappa on 3/30/22.
//

#include "../incs/Animal.hpp"

Animal::Animal() {
	std::cout<<"Default constructor Animal called"<<std::endl;
}

Animal::Animal(const Animal &temp) {
	std::cout<<"Copy constructor Animal called"<<std::endl;
	this->type = temp.type;
}

Animal &Animal::operator=(const Animal &temp) {
	std::cout<<"Assignement operator for Animal called"<<std::endl;
	this->type = temp.type;
	return(*this);
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout<<"Animal can make sound"<<std::endl;
}

Animal::~Animal() {
	std::cout<<"Default destructor Animal called"<<std::endl;
}

Brain *Animal::getBrain() {
	return (NULL);
}