#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
		WrongAnimal(const WrongAnimal& wrongAnimal);
        ~WrongAnimal();
        std::string getType() const;
        void                setType(std::string type);
        virtual void        makeSound() const;

		WrongAnimal&                operator=(const WrongAnimal& wrongAnimal);
};

#endif
