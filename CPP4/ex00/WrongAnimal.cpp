#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "Unknown Wrong type";
    std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    std::cout << "Wrong Animal copy constructor called" << std::endl;
    this->type = WrongAnimal.type;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong Animal destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Some WrongAnimal sounds" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
void        WrongAnimal::setType(std::string type)
{
    this->type = type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    this->type = wrongAnimal.type;
    std::cout << "Wrong Animal assignment operator called" << std::endl;
    return *this;
}
