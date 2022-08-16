#ifndef U_HPP
#define U_HPP
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
	protected:
		AMateria	*matrix[4];
		int			index;
		std::string	name;
	public:
		ICharacter();
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
#endif
