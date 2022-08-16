#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain *brain;
    public:
        Dog();
		Dog(const Dog& dog);
        ~Dog();
        void				makeSound() const;

		void				setIdea(std::string idea) const;
		void				getIdea(int id) const;
		Dog&				operator=(const Dog& dog);
};
