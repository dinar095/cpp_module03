#include <iostream>
#pragma once

using std::string;
using std::cout;
using std::endl;

class ClapTrap {

private:
	string m_name;
	unsigned int m_hitpoints = 10;
	unsigned int m_engy_point = 10;
	unsigned int m_attack_dam = 0;

public:
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};