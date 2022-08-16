#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(Cure const& cure);
        ~Cure();
        AMateria*   clone() const;
        void        use(ICharacter&);

		Cure& operator=(const Cure& cure);
};
