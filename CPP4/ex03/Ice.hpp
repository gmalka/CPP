#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const& ice);
		~Ice();
		AMateria*	clone() const;
		void		use(ICharacter&);

		Ice& operator=(const Ice& ice);
};
