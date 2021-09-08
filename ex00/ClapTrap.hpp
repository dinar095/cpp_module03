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
	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	std::string		getName() const;
	unsigned int	getHitpoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;

private:
	string m_name;
	unsigned int m_hitpoints;
	unsigned int m_energy_point;
	unsigned int m_attack_dam;
};