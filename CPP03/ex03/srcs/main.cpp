//
// Created by John Nappa on 3/29/22.
//

#include "../incs/DiamondTrap.hpp"

int main(){
	DiamondTrap a("Loh");
	a.attack("asd");
	a.getInfo();
	a.highFivesGuys();
	a.guardGate();
	a.whoIAm();
	DiamondTrap b(a);
	b.getInfo();
	b.whoIAm();
	DiamondTrap c;
	c = b;
	c.getInfo();
	c.whoIAm();

}