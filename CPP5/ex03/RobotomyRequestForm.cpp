#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->getAble() == false || executor.getAble() == false)
    {
        std::cout << "Incorrect bureaucrat or form" << std::endl;
        return ;
    }
	try
	{
		if (this->getExe() >= executor.getGrade())
	  {
			std::srand(std::time(NULL));
			if ((rand() % 100 + 1) <= 50)
				std::cout << target << " has been robotomized successfully" << std::endl;
			else
				std::cout << "The robotomy failed!" << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
    catch(const std::exception& e)
	{
        std::cout << executor.getName() << " couldn't execute" << this->getName() << " because his grade is too low" << std::endl;
	}
}
