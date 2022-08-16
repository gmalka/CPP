#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCopy)
{
    std::cout << "Wrong Cat copy constructor called" << std::endl;
    this->type = wrongCopy.type;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << "Go F#@%&# yourself!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    this->type = wrongCat.type;
    std::cout << "Wrong Cat assignment operator called" << std::endl;
    return *this;
}
