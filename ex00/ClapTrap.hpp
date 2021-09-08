#include <iostream>
#pragma once

using std::string;
using std::cout;
using std::endl;

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	unsigned int getHitpoints();
	unsigned int getEnergyPoints();
	unsigned int getAttackDamage();

private:
	string m_name;
	unsigned int m_hitpoints = 10;
	unsigned int m_energy_point = 10;
	unsigned int m_attack_dam = 0;
};