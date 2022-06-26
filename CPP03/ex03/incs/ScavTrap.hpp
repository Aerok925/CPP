//
// Created by John Nappa on 3/29/22.
//

#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	~ScavTrap();
	void attack(const std::string &name);
	ScavTrap(const ScavTrap& temp);
	ScavTrap & operator=(ScavTrap  &temp);
	void guardGate();
};


#endif //CPP03_SCAVTRAP_HPP
