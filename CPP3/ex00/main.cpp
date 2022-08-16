#include "ClapTrap.hpp"

int main()
{
	ClapTrap ctp, ptc("Олег", 3);
	ctp.attack("Monster 1");
	ptc.attack("Monster 2");
	ctp.takeDamage(10);
	ptc.takeDamage(8);
	ptc.beRepaired(11);
	ctp.beRepaired(1);
	ctp.displayInfo();
	ctp = ptc;
	ctp.displayInfo();
	return 0;
}
