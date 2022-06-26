//
// Created by John Nappa on 3/29/22.
//

#include "../incs/ScavTrap.hpp"
#include "../incs/FragTrap.hpp"

int main(){
	FragTrap a("asd");
	a.attack("Asd");
	a.highFivesGuys();
	a.getInfo();
	a.takeDamage(12);
	a.getInfo();
	a.beRepaired(12);
	a.getInfo();
	a.takeDamage(50);
	FragTrap b(a);
	b.getInfo();
}