//
// Created by John Nappa on 3/31/22.
//

#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP

#include "iostream"

class Brain {
public:
	Brain();
	Brain(const Brain&temp);
	~Brain();
	Brain &operator=(const Brain&temp);
	std::string *ideas;
};


#endif //CPP04_BRAIN_HPP
