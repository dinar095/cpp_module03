#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap test("Kroco");
	ScavTrap tukan("Tukan");
	ScavTrap worobey;
	tukan.guardGate();
	worobey = tukan;
	cout << worobey.getName() << endl;

	return 0;
}