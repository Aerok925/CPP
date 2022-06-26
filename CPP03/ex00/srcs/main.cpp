//
// Created by John Nappa on 3/29/22.
//

#include "../incs/ClapTrap.hpp"

int main(){
	ClapTrap a("Vova");
	ClapTrap b(a);
	ClapTrap c = b;
	c.takeDamage(123);
	c.attack("asd");
	c.beRepaired(5);
	c.attack("asd");
	c.getDamage(-1);
	c.attack("asd");
	c.getDamage(5);
	c.attack("asd");
}