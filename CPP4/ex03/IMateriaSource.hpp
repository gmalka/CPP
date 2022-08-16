#include "AMateria.hpp"

class IMateriaSource
{
	protected:
		AMateria	*materia[4];
		int			index;
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
