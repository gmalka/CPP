#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Trash";
}

AMateria::AMateria(AMateria const& materia)
{
	this->type = materia.type;
}

AMateria::~AMateria()
{
	std::cout << this->type << " destroyed" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

std::string const& AMateria::getType() const
{
	return this->type;
}

void        AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " use " << this->type << std::endl;
}

AMateria&			AMateria::operator=(const AMateria& materia)
{
	this->type = materia.type;
	return *this;
}
