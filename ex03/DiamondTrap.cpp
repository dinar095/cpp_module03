#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : FragTrap(name), ScavTrap(name)
{
	m_name = name;
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_point = ScavTrap::m_energy_point;
	m_attack_dam = FragTrap::m_attack_damage;
	m_guardGate = ScavTrap::m_guardGate;
	cout << "DiamondTrap " << m_name << " constructor" << endl;
}

DiamondTrap::DiamondTrap(string name)
{
	m_name = name;
	ClapTrap::m_name = m_name;
	m_name = ClapTrap::m_name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_point = ScavTrap::m_energy_point;
	m_attack_dam = FragTrap::m_attack_damage;
	m_guardGate = ScavTrap::m_guardGate;
	cout << "DiamondTrap constructor ";
	cout << m_name  << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "Default DiamondTrap destructor" << endl;
}