#include "FragTrap.hpp"

const short FragTrap::myLife = 100;
const int	FragTrap::myDamage = 30;

FragTrap::FragTrap(void){
	std::cout << "Frag Trap default constructor called" << std::endl;
	this->name = "Jhon";
	this->life = myLife;
	this->energy = 100;
	this->damage = myDamage;
}

FragTrap::FragTrap(std::string name):ClapTrap(name) {
	std::cout << "Frag Trap constructor called" << std::endl;
    this->life = myLife;
    this->energy = 100;
	this->damage = myDamage;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " is destroyed" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (isAlive == false)
        std::cout << "Sorry, i'am dead" << std::endl;
    else
        std::cout << "Frag Trap attack " << target << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	if (isAlive == true)
		std::cout << "Success highFives" << std::endl;
	else
		std::cout << "Unsuccess highFives, you are dead man, pal" << std::endl;
}
