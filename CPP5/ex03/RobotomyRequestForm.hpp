#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		void	execute(Bureaucrat const& executor) const;
};
#endif
