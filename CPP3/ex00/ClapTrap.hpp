#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	name;
		short		life;
		short		energy;
		int			damage;
		bool		isAlive;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap(std::string name);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		displayInfo(void);

		void		operator= (const ClapTrap& claptrap);
};

#endif
