#include "Form.hpp"

int main()
{
	Bureaucrat b("Jhon", 5);
	Form	f("Gmalka", 4, 15), g("G", 9, 40);
	b.signForm(f);
	b.signForm(g);
	std::cout << f;
	/*std::cout << j.getGrade() << std::endl;
	b = j;
	std::cout << b << std::endl;
	std::cout << j << std::endl;
	std::cout << g << std::endl;
	std::cout << q << std::endl;*/
}
