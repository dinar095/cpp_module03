#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#pragma once

#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(string name);
	ScavTrap(void);
	~ScavTrap();
	ScavTrap(const ScavTrap& src);
	ScavTrap& operator=(const ScavTrap & value);

	void guardGate();
	virtual void	attack(std::string const & target);
protected:
	bool m_guardGate;
};
#endif
