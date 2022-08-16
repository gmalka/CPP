#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		void				makeSound() const;

		void                setIdea(std::string idea) const;
        void                getIdea(int id) const;
		Cat&				operator=(const Cat& cat);
};
