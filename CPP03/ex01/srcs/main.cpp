//
// Created by John Nappa on 3/29/22.
//

#include "../incs/ScavTrap.hpp"

int main(){
	ScavTrap a("Scav");
	ScavTrap b(a);
	ClapTrap c("Clap");
	a.attack("asd");
	a.takeDamage(12);
	a.takeDamage(-12);
	c.attack("Homeless");
	a.beRepaired(465);
	a.getDamage(123);
	a.attack("asd");
	a.takeDamage(1000);
	a.attack("Asd");
	a.beRepaired(2);
	a.takeDamage(1);
	a.attack("asd");
	a.takeDamage(1);
	a.attack("asd");
}