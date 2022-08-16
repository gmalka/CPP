#include "Intern.hpp"

Intern::Intern()
{
	formName[0] = "presidential pardon";
	formName[1] = "robotomy request";
	formName[2] = "shrubbery creation";
}

Intern::Intern(Intern const& i)
{
	formName[0] = "presidential pardon";
    formName[1] = "robotomy request";
    formName[2] = "shrubbery creation";
}

Intern::~Intern()
{}

Intern&	Intern::operator=(Intern const& i)
{
	return *this;
}

Form    *Intern::makeForm(std::string fname, std::string target)
{
	int		index = -1;

	for(int i = 0; i < 3; i++)
	{
		if (fname == formName[i])
			index = i;
	}
	switch (index)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Error: dont find named Form!" << std::endl;
	}
	return NULL;
}
