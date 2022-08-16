#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);

		void    attack(const std::string& target);
		void	highFivesGuys(void);
};
