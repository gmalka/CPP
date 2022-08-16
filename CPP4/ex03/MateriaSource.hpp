#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& msouce);
		~MateriaSource();
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const&);

		MateriaSource& operator=(MateriaSource const& msource);
};
