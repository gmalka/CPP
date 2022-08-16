#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const& character);
		~Character();
		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

		Character&			operator=(const Character& character);
};

std::ostream&       operator<<(std::ostream &os, const Character &p);
