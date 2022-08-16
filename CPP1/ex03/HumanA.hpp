#include "Weapon.hpp"
#include <iostream>

class	HumanA {
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};
