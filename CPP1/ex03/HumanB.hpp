#include "Weapon.hpp"
#include <iostream>

class	HumanB {
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};
