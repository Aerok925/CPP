//
// Created by John Nappa on 3/29/22.
//

#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP

#include "iostream"

class ClapTrap {
public:
	ClapTrap(const std::string &name);
	~ClapTrap();
	ClapTrap(const ClapTrap &temp);
	ClapTrap &operator=(const ClapTrap &temp);
	void attack(const std::string &name);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void getDamage(unsigned int amount);
private:
	bool check_energy();
	bool check_hp();
	int health;
	int energy;
	int damage;
	std::string name;
};

#endif //CPP03_CLAPTRAP_HPP
