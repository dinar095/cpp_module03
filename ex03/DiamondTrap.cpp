#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	m_name = "Default";
	ClapTrap::m_name = m_name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_point = ScavTrap::m_energy_point;
	m_attack_dam = FragTrap::m_attack_dam;
	m_guardGate = ScavTrap::m_guardGate;
	cout << "DiamondTrap constructor " << m_name << " called" << endl;
}

DiamondTrap::DiamondTrap(string name)
{
	m_name = name;
	ClapTrap::m_name = name + "_clap_name";
	m_hitpoints = FragTrap::m_hitpoints;
	m_energy_point = ScavTrap::m_energy_point;
	m_attack_dam = FragTrap::m_attack_dam;
	m_guardGate = ScavTrap::m_guardGate;
	cout << "DiamondTrap constructor " << m_name << " called" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << m_name << " destroyed" << endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout << "DiamondTrap: " << m_name << endl;
	cout << "ClapTrap   : " << ClapTrap::m_name << endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this == &src)
		return *this;
	else
	{
		m_name = src.m_name;
		m_hitpoints = src.m_hitpoints;
		m_energy_point = src.m_energy_point;
		m_attack_dam = src.m_attack_dam;
		return *this;
	}
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
}

unsigned int DiamondTrap::getEnergyPoint() const
{
	return ScavTrap::getEnergyPoint();
}

unsigned int DiamondTrap::getHitPoint() const
{
	return FragTrap::getHitPoint();
}

unsigned int DiamondTrap::getAttackDamage() const
{
	return FragTrap::getAttackDamage();
}

string DiamondTrap::getName() const
{
	return m_name;
}

std::ostream& operator<<(std::ostream &out, DiamondTrap const &src)
{
	out << "DiamondTrap name: " << src.DiamondTrap::getName() << endl;
	out << "ClapTrap name: " << src.ClapTrap::getName() << endl;
	out << "Hitpoints - " << src.getHitPoint() << std::endl;
	out << "EnergyPoints - " << src.getEnergyPoint() << std::endl;
	out << "AttackDamage - " << src.getAttackDamage() << std::endl;
	return out;
}




