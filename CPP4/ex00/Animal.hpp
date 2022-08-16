#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		~Animal();
		std::string	getType() const;
		void				setType(std::string type);
		virtual void		makeSound() const;

		virtual Animal&     operator=(const Animal& animal);
};

#endif
