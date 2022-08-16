#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("Jhon", 80);
		RobotomyRequestForm		g("Jha");
		Form	*o = new ShrubberyCreationForm("QQQ");
		PresidentialPardonForm	y("Ola");
		o->execute(b);
		g.execute(b);
		y.execute(b);
		b.executeForm(y);
		delete o;
	}
	catch(const std::exception& e)
	{
		std::cout << "some Exception" << std::endl;
	}
	/*std::cout << j.getGrade() << std::endl;
	b = j;
	std::cout << b << std::endl;
	std::cout << j << std::endl;
	std::cout << g << std::endl;
	std::cout << q << std::endl;*/
}
