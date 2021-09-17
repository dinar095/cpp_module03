#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#pragma once

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(string name);
	ScavTrap(ScavTrap);
	ScavTrap& operator=(ScavTrap const &value);
	void guardGate();

private:

};
