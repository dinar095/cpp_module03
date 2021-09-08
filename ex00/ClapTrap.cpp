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
	cout << "ClapTrap destructor with name " << m_name << " called" << endl;
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
		cout << "ClapTrap " <<  m_name <<  " attack " << target << " , causing ";
		cout << m_attack_dam <<  " points of damage!" << endl;
	}
}