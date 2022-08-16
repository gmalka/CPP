#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Jhon", 0), j("pher", 2), g("JHA"), q("Y", 169);
	std::cout << j.getGrade() << std::endl;
	b = j;
	std::cout << b << std::endl;
	std::cout << j << std::endl;
	std::cout << g << std::endl;
	std::cout << q << std::endl;
}
