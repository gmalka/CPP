#ifndef SHRUBB_HPP
#define SHRUBB_HPP
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		void    execute(Bureaucrat const& executor) const;
};
#endif
