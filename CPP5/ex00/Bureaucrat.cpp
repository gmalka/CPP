#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("JA")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name): name(name)
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
	this->grade = 150;
	try
	{
		if (grade <= 0)
			throw GradeTooHighException("Too hight Grade");
		if (grade > 150)
			throw GradeTooLowException("Too low Grade");
		this->grade = grade;
	}
	catch (const GradeTooHighException& e)
	{
		std::cout << "Error:" << e.getError() << std::endl;
	}
	catch (const GradeTooLowException& e)
    {
        std::cout << "Error:" << e.getError() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const& burcr): name(burcr.name)
{
	this->grade = burcr.getGrade();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Buracrat " << this->getName() << " destroyed" << std::endl;
}

std::string		   Bureaucrat::getName()	const
{
	return this->name;
}

int                 Bureaucrat::getGrade()  const
{
	return this->grade;
}

Bureaucrat&         Bureaucrat::operator=(Bureaucrat const& burcr)
{
    this->grade = burcr.getGrade();
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bur)
{
	return (os << bur.getName() << " bureacrat grade " << bur.getGrade() << std::endl);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error)
{
	m_error = error;
}

std::string	Bureaucrat::GradeTooHighException::getError() const
{
	return m_error;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error)
{
    m_error = error;
}

std::string Bureaucrat::GradeTooLowException::getError() const
{
    return m_error;
}
