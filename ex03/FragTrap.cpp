#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	m_name = "Default";
	m_attack_dam = 30;
	m_energy_point = 100;
	m_hitpoints = 100;
	cout << "FragTrap constructor " << m_name << " called" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap " << m_name << " destroyed" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	m_attack_dam = 30;
	m_energy_point = 100;
	m_hitpoints = 100;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this == &src)
		return (*this);
	else
	{
		m_name = src.m_name;
		m_hitpoints = src.m_hitpoints;
		m_energy_point = src.m_energy_point;
		m_attack_dam = src.m_attack_dam;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap& src)
{
	*this = src;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Hey, high fives?" << endl;
}

void FragTrap::attack(std::string const & target)
{
	if (m_energy_point < m_attack_dam)
		cout << "Not enough energy to attack" << endl;
	else
	{
		m_energy_point -= m_attack_dam;
		cout << "FragTrap " <<  m_name <<  " attack " << target << ", causing ";
		cout << m_attack_dam <<  " points of damage!" << endl;
	}
}
