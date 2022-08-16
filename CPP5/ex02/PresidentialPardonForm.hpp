#ifndef PRES_HPP
#define PRES_HPP
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
        std::string target;
	public:
		PresidentialPardonForm(std::string target);
		void	execute(Bureaucrat const& executor) const;
};
#endif
