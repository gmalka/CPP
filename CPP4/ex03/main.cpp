#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	/*MateriaSource	*ch = new MateriaSource();
	ch->learnMateria(new Ice());
	MateriaSource	hc;
	hc	= *ch;
	ch->learnMateria(new Ice());
	ch->learnMateria(new Ice());
	ch->learnMateria(new Ice());
	ch->learnMateria(new Ice());
	ch->learnMateria(new Ice());
	delete ch;*/
	/*Character	*ch = new Character("TOMMY");
	ch->equip(new Ice());
	std::cout << "HI" << std::endl;
	Character	*hc = new Character(*ch);
	*ch = *hc;
	ch->equip(new Ice());
	ch->equip(new Ice());
	ch->equip(new Ice());
	ch->equip(new Ice());
	delete ch;
	delete hc;*/


	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete src;
	delete me;
	return 0;
}
