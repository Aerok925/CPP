#include "Zombie.hpp"

int main()
{
	Zombie a("zom1");
	Zombie *b;

	b = newZombie("zom2");

	randomChump("zom3");
	a.announcement();
	b->announcement();
	delete b;
}