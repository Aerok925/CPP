//
// Created by John Nappa on 3/31/22.
//

#include "../incs/Dog.hpp"

Dog::Dog() {
	std::cout<<"Default constructor DOG called"<<std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout<<"Default destructor DOG called"<<std::endl;
}

void Dog::makeSound() const {
	std::cout<<"RAW"<<std::endl;
}

Dog::Dog(const Dog &temp) {
	std::cout<<"Cope constructor DOG called"<<std::endl;
	brain = temp.brain;
	this->type = temp.getType();
}

Dog &Dog::operator=(const Dog &temp) {
	std::cout<<"Assignement operator for DOG called"<<std::endl;
	brain = temp.brain;
	this->type = temp.type;
	return(*this);
}

Brain *Dog::getBrain(){
	return (&brain);
}