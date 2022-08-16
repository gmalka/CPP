#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(Ice const& ice)
{
	this->type = ice.type;
}

Ice::~Ice()
{
	std::cout << "ICE DESTROYED" << std::endl;
}

AMateria*	Ice::clone() const
{
	Ice *ice = new Ice(*this);
	return ice;
}

void		Ice::use(ICharacter& target)
{
	std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}

Ice&		Ice::operator=(const Ice& ice)
{
	this->type = ice.type;
	return *this;
}
