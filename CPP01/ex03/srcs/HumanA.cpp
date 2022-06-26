#include "../incs/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) {
	this->type = &type;
	this->name = name;
}

void HumanA::attack() {
	std::cout<<name<<", attacks with their "<<type->getType()<<std::endl;
}