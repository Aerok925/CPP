#ifndef CPP01_HUMANA_HPP
#define CPP01_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string, Weapon &);
	void attack();
private:
	std::string name;
	Weapon *type;
};


#endif //CPP01_HUMANA_HPP
