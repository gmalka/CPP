#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "Scav Trap default constructor called" << std::endl;
	this->energy = 50;
	this->life = 100;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "Scav Trap constructor called" << std::endl;
	this->energy = 50;
    this->life = 100;
	this->damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Oh dear ScavTrap, named " << this->name <<" you are been destroyed" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
	if (isAlive == false)
        std::cout << "Sorry, " << this->name << " is dead." << std::endl;
	else
		std::cout << "Scav Trap attack " << target << std::endl;
}

void	ScavTrap::guardGate()
{
	if (isAlive == false)
        std::cout << "Sorry, " << this->name << " is dead." << std::endl;
    else
        std::cout << this->name << " is now a Guardian of the Gate" << std::endl;	
}
