//
// Created by John Nappa on 3/31/22.
//

#include "../incs/WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout<<"Default constructor WrongCAT called"<<std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &temp) {
	std::cout<<"Cope constructor WrongCAT called"<<std::endl;
	this->type = temp.getType();
}

WrongCat::~WrongCat(){
	std::cout<<"Default destructor WrongCAT called"<<std::endl;
}

void WrongCat::makeSound() const {
	std::cout<<"Wrong MEEOW"<<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &temp) {
	std::cout<<"Assignement operator for WrongCAT called"<<std::endl;
	this->type = temp.type;
	return(*this);
}