#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = ClapTrap::myName;
	this->name = _name + "_clap_name";
	this->energy = ScavTrap::myEnergy;
	this->damage = FragTrap::myDamage;
	this->life = FragTrap::myLife;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
    this->name = this->_name + "_clap_name";
    this->energy = ScavTrap::myEnergy;
    this->damage = FragTrap::myDamage;
    this->life = FragTrap::myLife;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->name << std::endl;
	std::cout << this->_name << std::endl;
}
