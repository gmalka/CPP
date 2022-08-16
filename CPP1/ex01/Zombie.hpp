#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void initialize(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
