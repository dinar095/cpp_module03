#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("Default"), m_hitpoints(10), m_energy_point(10), m_attack_dam(10)
{
	cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) :  m_name(name), m_hitpoints(10), m_energy_point(10), m_attack_dam(10)
{
	cout << "ClapTrap constructor with name " << m_name << " called" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap destructor with name " << m_name << " destroyed" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return *this;
	this->m_name = src.getName();
	this->m_hitpoints = src.getHitpoints();
	this->m_energy_point = src.getEnergyPoints();
	this->m_attack_dam = src.getAttackDamage();
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	if (m_energy_point < m_attack_dam)
	{
		cout << "Not enough energy to attack" << endl;
	}
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
	cout << "ClapTrap " << m_name << " taked";
	cout << amount << " points!" << endl;
}


