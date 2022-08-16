#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:public FragTrap, public ScavTrap{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		using ScavTrap::attack;
		void	whoAmI();
};
