#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
		WrongCat(const WrongCat& wrongCopy);
        ~WrongCat();
        void    makeSound() const;

		WrongCat&                operator=(const WrongCat& wrongCat);
};
