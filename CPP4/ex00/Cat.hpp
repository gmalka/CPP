#include "Animal.hpp"


class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		void				makeSound() const;

		Cat&				operator=(const Cat& cat);
};
