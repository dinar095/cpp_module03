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
	ClapTrap(const ClapTrap& src);
	ClapTrap& operator=(const ClapTrap& src);
	virtual void	attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	unsigned int 	getEnergyPoint();
	unsigned int 	getHitPoint();
	unsigned int 	getAttackDamage();

protected:
	string m_name;
	unsigned int m_hitpoints;
	unsigned int m_energy_point;
	unsigned int m_attack_dam;
};