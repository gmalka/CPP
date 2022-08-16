#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap {
	public:
		static const short myLife;
		static const int   myDamage;

		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);

		void    attack(const std::string& target);
		void	highFivesGuys(void);
};
