#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog anuimals[2] = {Dog(), Dog()};
	anuimals[0].setIdea("HELLO there");
	anuimals[0].setIdea("GOOD BYE");
	for(int i = 0; i < 101; i++) {
		std::cout << i << std::endl;
		anuimals[0].setIdea("I");
	}
	anuimals[1] = anuimals[0];
	anuimals[1].getIdea(0);
	anuimals[1].getIdea(1);
	return 0;
}
