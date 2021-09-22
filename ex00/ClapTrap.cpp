#include "ClapTrap.hpp"
#include "../ex03/ClapTrap.hpp"


ClapTrap::ClapTrap() : m_name("Default"), m_hitpoints(10), m_energy_point(10), m_attack_dam(10)
{
	cout << "ClapTrap constructor " << m_name << " called" << endl;
}

ClapTrap::ClapTrap(string name) :  m_name(name), m_hitpoints(10), m_energy_point(10), m_attack_dam(10)
{
	cout << "ClapTrap constructor " << m_name << " called" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap " << m_name << " destroyed" << endl;
}
ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return *this;
	this->m_name = src.m_name;
	this->m_hitpoints = src.m_hitpoints;
	this->m_energy_point = src.m_energy_point;
	this->m_attack_dam = src.m_attack_dam;
	return *this;
}
void ClapTrap::attack(std::string const & target)
{
	if (m_energy_point < m_attack_dam)
		cout << "Not enough energy to attack" << endl;
	else
	{
		m_energy_point -= m_attack_dam;
		cout << "ClapTrap " <<  m_name <<  " attack " << target << ", causing ";
		cout << m_attack_dam <<  " points of damage!" << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitpoints <= amount)
	{
		cout << "ClapTrap " << m_name << " taked ";
		cout << m_hitpoints << "points of damage and died" << endl;
		m_hitpoints = 0;
	}
	else
	{
		m_hitpoints -= amount;
		cout << "ClapTrap " << m_name << " taked ";
		cout << amount << " points of damage!" << endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	m_hitpoints += amount;
	cout << "ClapTrap " << m_name << " taked ";
	cout << amount << " points!" << endl;
}



unsigned int ClapTrap::getAttackDamage()
{
	return m_attack_dam;
}

unsigned int ClapTrap::getEnergyPoint()
{
	return m_energy_point;
}
unsigned int ClapTrap::getHitPoint()
{
	return m_hitpoints;
}


