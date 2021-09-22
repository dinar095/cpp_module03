#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap voro("Vorona");
	ScavTrap tukan("Tukan");
	tukan.guardGate();
	voro.attack("Tukan");
	tukan.attack("Vorona");
	tukan.beRepaired(50);
	voro.beRepaired(20);

	return 0;
}