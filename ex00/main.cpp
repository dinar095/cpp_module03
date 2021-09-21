#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap test = ClapTrap("Kroco");
	ClapTrap second("Goose");
	test.attack("Gaga");
	test.takeDamage(2);
	test.beRepaired(12);
	return 0;
}