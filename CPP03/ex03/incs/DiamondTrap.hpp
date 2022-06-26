//
// Created by John Nappa on 3/29/22.
//

#ifndef CPP03_DIAMONDTRAP_HPP
#define CPP03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
public:
	DiamondTrap();
	DiamondTrap(std::string const &name);
	DiamondTrap & operator=(const DiamondTrap &temp);
	DiamondTrap(const DiamondTrap &temp);
	~DiamondTrap();
	void whoIAm();

private:
	std::string name;
};


#endif //CPP03_DIAMONDTRAP_HPP
