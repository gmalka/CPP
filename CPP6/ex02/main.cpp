#include "B.hpp"
#include "C.hpp"
#include "A.hpp"
#include <ctime>

Base* generate()
{
	srand(time(0));
	switch (rand() % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	std::cout << "Something wrong" << std::endl;
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "This is B class!" << std::endl;
	else if (dynamic_cast<A*>(p) != NULL)
		std::cout << "This is A class!" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "This is C class!" << std::endl;
	else
		std::cout << "I dont know this class!" << std::endl;
}

void identify(Base& p)
{
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B class identified" << std::endl;
	}
	catch (std::exception e)
	{}
	try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C class identified" << std::endl;
    }
    catch (std::exception e)
    {}
	try
    {
        A& c = dynamic_cast<A&>(p);
        std::cout << "A class identified" << std::endl;
    }
    catch (std::exception e)
    {}
}

int main()
{
	Base *base;

	base = new C();
	identify(base); // pointer
	identify(*base); // reference
	delete base;
	return 0;
}
