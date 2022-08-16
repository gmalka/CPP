#include "ScavTrap.hpp"

int main()
{
	ScavTrap trp;
	trp.displayInfo();
	trp.attack("Dirty Rat");
	trp.takeDamage(9);
	/*for(int i; i < 51; i++) {
		trp.beRepaired(1);
	}*/
	trp.attack("Monster");
	trp.beRepaired(1);
	trp.guardGate();
	return 0;
}
