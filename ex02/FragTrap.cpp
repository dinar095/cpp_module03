#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	m_name = "Default";
	m_attack_dam = 30;
	m_energy_point = 100;
	m_hitpoints = 100;
}

FragTrap::~FragTrap()
{
	cout << "Default FragTrap destructor" << endl;
}

FragTrap::FragTrap(string name)
{
	m_name = name;
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
	std::cout << "FragTrap " << m_name << " Hey, high fives?" << endl;
}
