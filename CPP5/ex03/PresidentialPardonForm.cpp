#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) 
{
	this->target = target;
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
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
			std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	   	}
		else
			throw Form::GradeTooLowException();
	}
    catch (const std::exception& e)
	{
        std::cout << executor.getName() << " couldn't execute" << this->getName() << " because his grade is too low" << std::endl;
	}
}
