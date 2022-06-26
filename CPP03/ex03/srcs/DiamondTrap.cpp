//
// Created by John Nappa on 3/29/22.
//

#include "../incs/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {

}

DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(name), FragTrap(name) {
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->energy = ScavTrap::energy;
	this->health = FragTrap::health;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &temp) :ScavTrap(temp), FragTrap(temp) {
	this->ClapTrap::name = temp.name +  "_clap_name";
	this->name = temp.name;
	this->energy = temp.energy;
	this->health = temp.health;
	this->damage = temp.damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &temp){
	FragTrap::operator=(temp);
	this->name = temp.name;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout<<"Destructor Diamond"<<std::endl;
}

void DiamondTrap::whoIAm() {
	std::cout << "I am " << this->name << " and my ClapTrap name is "
			  << ClapTrap::name << std::endl;
}