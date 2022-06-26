#include "Zombie.hpp"

int main(){
    Zombie a("asd");
    Zombie *horde = zombieHorde(5, "zom");

	for (int i = 0; i < 5; i++)
		horde[i].announcement();
    delete []horde;
}