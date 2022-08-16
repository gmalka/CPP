#include "Animal.hpp"

Animal::Animal() {
    type = "Unknown type";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = animal.type;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Some Animal sounds" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
void        Animal::setType(std::string type)
{
    this->type = type;
}

Animal& Animal::operator=(const Animal& animal)
{
    this->type = animal.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}
