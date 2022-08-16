#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow, m#@%&#r!" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    this->type = cat.type;
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}
