#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.type;
	*(this->brain) = *(dog.brain);
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void    Dog::makeSound() const {
    std::cout << "Gav Gav, m#@%&#r!" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    this->type = dog.type;
    *(brain) = *(dog.brain);
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

void                Dog::setIdea(std::string idea) const
{
	this->brain->setIdea(idea);
}

void				Dog::getIdea(int id) const
{
	this->brain->getIdea(id);
}
