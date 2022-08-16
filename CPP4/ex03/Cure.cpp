#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(Cure const& cure):AMateria(cure) {}

Cure::~Cure()
{
	std::cout << "CURE DESTROYED" << std::endl;
}

AMateria*	Cure::clone() const
{
	Cure *cure = new Cure(*this);
    return cure;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "Heals " << target.getName() << "'s wounds" << std::endl;
}

Cure&        Cure::operator=(const Cure& cure)
{
    this->type = cure.type;
    return *this;
}
