#include <iostream>

int main()
{
	std::string	variable = "hello there";
	std::string	*stringPTR = &variable;
	std::string	&stringREF = variable;

	std::cout << &variable << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << variable << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
