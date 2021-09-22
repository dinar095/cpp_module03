#ifndef CPP_MODULE03_DIAMONDTRAP_HPP
#define CPP_MODULE03_DIAMONDTRAP_HPP
#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(string name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& src);
	DiamondTrap(const DiamondTrap& src);
	void attack(std::string const &target);
	void whoAmI(void);
	string			getName() const;
	unsigned int 	getEnergyPoint() const;
	unsigned int 	getHitPoint() const;
	unsigned int 	getAttackDamage() const;


private:
	string m_name;
};

std::ostream& operator<<(std::ostream &out, DiamondTrap const &src);
#endif
