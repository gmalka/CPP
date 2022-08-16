#include "Character.hpp"

Character::Character()
{
	name = "JHON";
	index = 0;
	for(int i=0; i < 4; i++)
        this->matrix[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	index = 0;
    for(int i=0; i < 4; i++)
        this->matrix[i] = NULL;
}

Character::Character(const Character &ch)
{
    this->name = ch.getName();
    for(int i=0; i < this->index; i++)
    {
        delete this->matrix[i];
    }
    for(int i=0; i < ch.index; i++)
    {
        this->matrix[i] = ch.matrix[i]->clone();
    }
}

Character &Character::operator=(const Character &ch)
{
    if (this == &ch)
        return (*this);
	for(int i=0; i < this->index; i++)
    {
        delete this->matrix[i];
    }
    this->name = ch.getName();
	this->index = ch.index;
    for(int i=0; i < ch.index; i++)
    {
       this->matrix[i] = ch.matrix[i]->clone();
    }
    return (*this);
}

Character::~Character()
{
    for(int i=0; i < index; i++)
    {
        delete (this->matrix[i]);
    }
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (index < 4)
        this->matrix[index++] = m;
	else {
		delete matrix[0];
		for(int i = 1; i < index; i++)
		{
			matrix[i - 1] = matrix[i];
		}
		matrix[index - 1] = m;
	}
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= index)
        return;
	delete matrix[idx];
    for(int i = idx; i < index - 1; i++)
	{
		matrix[i] = matrix[i + 1];
		matrix[i + 1] = NULL;
	}
	index--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= index)
        return ;
    if (this->matrix[idx])
        this->matrix[idx]->use(target);
}
