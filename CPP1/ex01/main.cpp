#include "Zombie.hpp"

int main()
{
	Zombie	*zombie = zombieHorde(2, "hello");
	for(int i = 0; i < 2; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}
