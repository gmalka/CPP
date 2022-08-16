#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap trp("Джошуа");
	trp.attack("IIII");
	trp.displayInfo();
	trp.attack("Dirty Rat");
	trp.takeDamage(9);
	trp.attack("Murad");
	trp.takeDamage(115);
	trp.beRepaired(1);
	FragTrap q(trp);
	q.displayInfo();
	q.highFivesGuys();
	return 0;
}
