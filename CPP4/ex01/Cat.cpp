#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	*brain = *(copy.brain);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound() const {
	std::cout << "Meow, m#@%&#r!" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    this->type = cat.type;
	*brain = *(cat.brain);
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

void                Cat::setIdea(std::string idea) const
{
    this->brain->setIdea(idea);
}

void                Cat::getIdea(int id) const
{
    this->brain->getIdea(id);
}
