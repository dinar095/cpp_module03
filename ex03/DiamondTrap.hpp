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
	DiamondTrap(string name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& src);
	DiamondTrap(const DiamondTrap& src);
	void attack(std::string const & target);
	void whoAmI(void);

private:
	string m_name;
};
#endif
