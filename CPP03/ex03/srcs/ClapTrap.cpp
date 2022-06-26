//
// Created by John Nappa on 3/29/22.
//

#include "../incs/ClapTrap.hpp"
ClapTrap::ClapTrap(const std::string &name) {
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout<<"Constructor Clap"<<std::endl;
}

ClapTrap::ClapTrap() {
	std::cout<<"Constructor Clap"<<std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout<<"Destructor Clap"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &temp) {
	std::cout<<"Copy constructor Clap"<<std::endl;
	this->name = temp.name;
	this->health = temp.health;
	this->damage = temp.damage;
	this->energy = temp.energy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &temp) {

	this->name = temp.name;
	this->health = temp.health;
	this->damage = temp.damage;
	this->energy = temp.energy;
	std::cout<<"Constructor copy assig Clap"<<std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &_name) {
	if (check_hp())
		return;
	if (check_energy())
		return;
	energy--;
	std::cout<<this->name<<" attacks " <<_name<<", causing "<< this->damage <<" points of damage"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount < 0){
		std::cout<<"ERROR: VALUE < 0"<<std::endl;
		return;
	}
	this->health -= amount;
	if (health < 0)
		health = 0;
	std::cout<<this->name<<" received damage equal to "<<amount<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if ((int)amount < 0){
		std::cout<<"ERROR: VALUE < 0"<<std::endl;
		return;
	}
	if (check_energy())
		return;
	this->health += amount;
	this->energy--;
	std::cout<<this->name<< " cured on "<<amount<<" HP"<<std::endl;
}

bool	ClapTrap::check_hp() {
	if (health == 0){
		std::cout<<"I DONT HAVE HP!"<<std::endl;
		return (1);
	}
	return (0);
}

void ClapTrap::getDamage(unsigned int amount)
{
	if ((int)amount < 0){
		std::cout<<"ERROR: VALUE < 0"<<std::endl;
		return;
	}
	this->damage += amount;
}

void ClapTrap::getInfo() {
	std::cout<<name<<std::endl;
	std::cout<<"damage - "<<damage<<std::endl;
	std::cout<<"hp - "<<health<<std::endl;
	std::cout<<"energy - "<<energy<<std::endl;
}

bool ClapTrap::check_energy() {
	if (energy == 0){
		std::cout<<"I DONT HAVE ENERGY!"<<std::endl;
		return (1);
	}
	return (0);
}