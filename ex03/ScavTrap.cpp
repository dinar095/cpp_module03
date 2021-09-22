#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	m_hitpoints = 100;
	m_energy_point = 50;
	m_attack_dam = 20;
	m_guardGate = false;
	cout << "ScavTrap constructor " << m_name << " called" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << m_name << " destroyed" << endl;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap with name ";
	cout << m_name << "  have enterred in Gate keeper mode"<< endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (m_energy_point < m_attack_dam)
		cout << "Not enough energy to attack" << endl;
	else
	{
		m_energy_point -= m_attack_dam;
		cout << "ScavTrap " <<  m_name <<  " attack " << target << ", causing ";
		cout << m_attack_dam <<  " points of damage!" << endl;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap & value)
{
	if (this == &value)
		return (*this);
	else
	{
		m_name = value.m_name;
		m_energy_point = value.m_energy_point;
		m_attack_dam = value.m_attack_dam;
		m_guardGate = value.m_guardGate;
		return (*this);
	}
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap::ScavTrap(void)
{
	m_hitpoints = 100;
	m_energy_point = 50;
	m_attack_dam = 20;
	m_guardGate = false;
	cout << "ScavTrap constructor " << m_name << " called" << endl;
}