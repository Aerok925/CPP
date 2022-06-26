#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string);
	void announcement(void);
	~Zombie();
private:
	void Say_name();
	std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif //CPP01_ZOMBIE_HPP
