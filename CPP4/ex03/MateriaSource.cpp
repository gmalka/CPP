#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	index = 0;
}

MateriaSource::MateriaSource(MateriaSource const& msource)
{
	for(int i = 0; i < this->index; i++)
		delete this->materia[i];
	this->index = msource.index;
	for(int i = 0; i < msource.index; i++)
	{
		materia[i] = msource.materia[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "Deleting.." << std::endl;
	for(int i = 0; i < this->index; i++)
	{
		delete this->materia[i];
	}
}

void	MateriaSource::learnMateria(AMateria *mat)
{
	if (this->index < 4)
	{
		this->materia[index] = mat;
		index++;
	}
	else
	{
		delete this->materia[0];
		for(int i = 1; i < this->index; i++)
		{
			this->materia[i - 1] = this->materia[i];
		}
		this->materia[this->index - 1] = mat;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0; i < this->index; i++)
	{
		//std::cout << this->materia[i]->getType() << "  " << type << std::endl;
		if (this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	}
	std::cout << "Not find" << std::endl;
	return NULL;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& msource)
{
	for(int i = 0; i < this->index; i++)
        delete this->materia[i];
    this->index = msource.index;
    for(int i = 0; i < msource.index; i++)
    {
        this->materia[i] = msource.materia[i]->clone();
    }
	return *this;
}
