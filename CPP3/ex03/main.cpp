#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	trp("Maga");
	trp.attack("something");
	trp.displayInfo();
	trp.whoAmI();
	/*trp.attack("Dirty Rat");
	trp.takeDamage(9);
	trp.beRepaired(1);
	trp.highFivesGuys();
	trp.guardGate();
	trp.takeDamage(115);
	trp.beRepaired(1);
	DiamondTrap q(trp);
	q.displayInfo();
	q.highFivesGuys();*/
	return 0;
}
