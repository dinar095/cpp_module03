#ifndef CPP_MODULE03_DIAMONDTRAP_H
#define CPP_MODULE03_DIAMONDTRAP_H
#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(string name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& src);
	DiamondTrap(const DiamondTrap& src);
	void whoAmI(void);

private:
	string m_name;
};


#endif
