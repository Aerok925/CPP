//
// Created by John Nappa on 3/29/22.
//

#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP

#include "iostream"

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	~ClapTrap();
	ClapTrap(const ClapTrap &temp);
	ClapTrap &operator=(const ClapTrap &temp);
	virtual void attack(const std::string &name);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void getDamage(unsigned int amount);

protected:
	bool check_energy();
	bool check_hp();
	int health;
	int energy;
	int damage;
	std::string name;
};

#endif //CPP03_CLAPTRAP_HPP
