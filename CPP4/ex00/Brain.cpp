#include "Brain.hpp"

Brain::Brain() {
	index = 0;
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    for(int i = 0; i < brain.index; i++) {
        this->ideas[i] = brain.ideas[i];
    }	
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

void                Brain::setIdea(std::string idea)
{
	if (this->index == 100)
	{
		for(int i = 1; i < 99; i++) {
			ideas[i - 1] = ideas[i];
		}
		ideas[index] = idea;
	}
	else
		ideas[index++] = idea;
}
void				Brain::getIdea(int id) const
{
	if (id >= 0 && id <= 99)
		std::cout << ideas[id] << std::endl;
}

const std::string			*Brain::getIdeas() const
{
	return ideas;
}

Brain&				Brain::operator=(const Brain& brain)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for(int i = 0; i < brain.index; i++) {
		this->ideas[i] = brain.ideas[i];
	}
    return *this;
}
