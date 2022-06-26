//
// Created by John Nappa on 3/29/22.
//

#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	std::cout<<"Constructor Scav"<<std::endl;
	this->damage = 20;
	this->health = 100;
	this->energy = 50;
}
ScavTrap::ScavTrap() : ClapTrap() {

}
void ScavTrap::attack(const std::string &name) {
	if (check_hp())
		return;
	if (check_energy())
		return;
	energy--;
	std::cout<<"ScavTrap "<<this->name<<" attacks " << name<<", causing "<< this->damage <<" points of damage"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &temp) : ClapTrap(temp){
	std::cout<<"Copy constructor Scav"<<std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &temp){
	ClapTrap::operator=(temp);
	std::cout<<"Constructor copy assig Scav"<<std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout<<"Destructor Scav"<<std::endl;
}

void ScavTrap::guardGate() {
	std::cout<<"ScavTrap is now in Gate keeper mode."<<std::endl;
}