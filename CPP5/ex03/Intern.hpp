#include <iostream>
#include "Form.h"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private:
		std::string formName[3];
	public:
		Intern();
		Intern(Intern const& i);
		~Intern();
		Form	*makeForm(std::string, std::string);

		Intern&	operator=(Intern const& i);
};
