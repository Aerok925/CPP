#include "../incs/HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}


HumanB::~HumanB(){

}

void HumanB::setWeapon(Weapon &type) {
	this->type = &type;
}

void HumanB::attack() {
	std::cout<<name<<", attacks with their "<<type->getType()<<std::endl;
}