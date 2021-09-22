#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap goose("Goose");
	cout << "*** Goose energy point before attack: " << goose.getEnergyPoint() << endl;
	goose.attack("man");
	cout << "***  Goose energy point after attack: " << goose.getEnergyPoint() << endl;
	goose.takeDamage(2);
	cout << "***  Goose Hit points before repair: " << goose.getHitPoint() << endl;
	goose.beRepaired(12);
	cout << "***  Goose Hit points after repair: " << goose.getHitPoint() << endl;
	return 0;
}