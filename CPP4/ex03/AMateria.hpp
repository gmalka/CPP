#ifndef HI_HPP
#define HI_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		virtual				~AMateria();
		AMateria(AMateria const& materia);
		AMateria(std::string const& type);

		std::string const& getType() const;

		virtual	AMateria*	clone() const = 0;
		virtual void use(ICharacter&);
		

		AMateria& operator=(const AMateria& materia);
};
#endif
