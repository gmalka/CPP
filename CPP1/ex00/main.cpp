#include "Zombie.hpp"

int main()
{
	randomChump("Jhone");
	Zombie *zombie = newZombie("Vova");
	zombie->announce();
	delete(zombie);
	return 0;
}
