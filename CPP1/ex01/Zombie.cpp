#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << "  Destroyed!"<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::initialize(std::string name)
{
	this->name = name;
}
