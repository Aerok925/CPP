//
// Created by John Nappa on 3/30/22.
//

#include "../incs/Cat.hpp"

Cat::Cat() {
	std::cout<<"Default constructor CAT called"<<std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &temp) {
	std::cout<<"Cope constructor CAT called"<<std::endl;
	brain = temp.brain;
	this->type = temp.getType();
}

Cat::~Cat(){
	std::cout<<"Default destructor CAT called"<<std::endl;
}

void Cat::makeSound() const {
	std::cout<<"MEEOW"<<std::endl;
}

Cat &Cat::operator=(const Cat &temp) {
	std::cout<<"Assignement operator for CAT called"<<std::endl;
	brain = temp.brain;
	this->type = temp.type;
	return(*this);
}

Brain *Cat::getBrain(){
	return (&brain);
}