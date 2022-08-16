#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.type;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "Gav Gav, m#@%&#r!" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    this->type = dog.type;
     std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}
