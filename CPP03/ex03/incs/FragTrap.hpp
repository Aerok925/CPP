//
// Created by John Nappa on 3/29/22.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap &operator=(const FragTrap &temp);
	FragTrap(const FragTrap &temp);
	void highFivesGuys(void);
	~FragTrap();
};


#endif //CPP03_FRAGTRAP_HPP
