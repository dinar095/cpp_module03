#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#pragma once

#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& src);
	ScavTrap& operator=(const ScavTrap & value);

	void	guardGate();
	void	attack(std::string const & target);
protected:
	bool m_guardGate;
};
#endif
