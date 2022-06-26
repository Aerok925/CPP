#ifndef CPP01_HUMANB_HPP
#define CPP01_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string);
	void setWeapon(Weapon &);
	~HumanB();
	void attack();
private:
	Weapon *type;
	std::string name;
};

#endif //CPP01_HUMANB_HPP
