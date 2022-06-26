//
// Created by John Nappa on 3/29/22.
//

#include "../incs/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout<<"Default constructor FragTrap called!"<<std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->damage = 30;
	this->energy = 100;
	this->health = 100;
	std::cout<<"Default constructor FragTrap called!"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &temp) : ClapTrap(temp){
	std::cout<<"Copy constructor FragTrap called!"<<std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &temp) {
	ClapTrap::operator=(temp);
	std::cout<<"= FragTrap called!"<<std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout<<"Destructor FragTrap called!"<<std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "Hey guys! Give me a high five!!!"<< std::endl;
}