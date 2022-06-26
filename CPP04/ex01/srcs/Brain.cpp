//
// Created by John Nappa on 3/31/22.
//

#include "../incs/Brain.hpp"

Brain::Brain() {
	std::cout<<"Constructor Brain called"<<std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "ideas";
}

Brain::Brain(const Brain &temp) {
	std::cout<<"Cope constructor Brain called"<<std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = temp.ideas[i];
}

Brain::~Brain() {
	std::cout<<"Destructor Brain called"<<std::endl;
	delete []this->ideas;
}

Brain &Brain::operator=(const Brain &temp) {
	std::cout<<"Assignement operator Brain called"<<std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = temp.ideas[i];
	return (*this);
}