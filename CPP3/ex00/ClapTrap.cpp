#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	isAlive = true;
	name = "Anton";
	life = 10;
	energy = 10;
	damage = 2;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	isAlive = true;
	this->name = name;
	this->damage = 2;
	life = 10;
	energy = 10;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->isAlive = claptrap.isAlive;
	this->name = claptrap.name;
	this->energy = claptrap.energy;
	this->life = claptrap.life;
	this->damage = claptrap.damage;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void    ClapTrap::operator= (const ClapTrap& claptrap)
{
	std::cout << "Operator '=' called" << std::endl;
	this->isAlive = claptrap.isAlive;
	this->name = claptrap.name;
    this->energy = claptrap.energy;
    this->life = claptrap.life;
    this->damage = claptrap.damage;	
}

void	ClapTrap::attack(const std::string& target)
{
	if (isAlive == false)
	{
		std::cout << "I am dead, pal" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	std::cout << this->name << " attack " << target << ", and deal " << this->damage << " damage" << std::endl;
	this->energy--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (isAlive == false)
    {
        std::cout << "I am dead, pal" << std::endl;
        return ;
    }
	std::cout << this->name << " takes " << amount << " damage " << std::endl;
	this->life -= amount;
	if (this->life <= 0)
	{
		std::cout << "Oh no! poor " << this->name << " is dead;( " << std::endl;
		isAlive = false;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (isAlive == false)
    {
        std::cout << "I am dead, pal" << std::endl;
        return ;
    }
	if (this->energy <= 0)
    {
        std::cout << "Not enough energy" << std::endl;
        return ;
    }
	this->life += amount;
	if (this->life > 10)
		this->life = 10;
	std::cout << this->name << " restores " << amount << " life, and now it is  " << this->life << std::endl;
	this->energy--;
    return ;
}

void        ClapTrap::displayInfo(void)
{
	if (this->life <= 0)
		std::cout << "I am already dead, dude" << std::endl;
	else
		std::cout << "I'm still alive, dude" << std::endl;
	std::cout << "NAME   = " << this->name << std::endl;
	std::cout << "LIFE   = " << this->life << std::endl;
	std::cout << "ENERGY = " << this->energy << std::endl;
}
