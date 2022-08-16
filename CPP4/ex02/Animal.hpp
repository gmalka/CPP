#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		virtual				~Animal();
		std::string			getType() const;
		void				setType(std::string type);
		virtual Animal&		operator=(const Animal& animal);

		virtual void		makeSound() const = 0;
};

#endif
