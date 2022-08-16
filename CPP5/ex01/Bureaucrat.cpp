#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("JA")
{
	this->grade = 150;
	able = true;
}

Bureaucrat::Bureaucrat(std::string const name): name(name)
{
	this->grade = 150;
	able = true;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
	able = true;
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
		able = false;
		std::cout << "Error:" << e.getError() << std::endl;
	}
	catch (const GradeTooLowException& e)
    {
		able = false;
        std::cout << "Error:" << e.getError() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const& burcr): name(burcr.name)
{
	this->grade = burcr.getGrade();
	this->able = burcr.able;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Buracrat " << this->getName() << " destroyed" << std::endl;
}

void                Bureaucrat::signForm(Form& f)
{
	f.beSigned(*this);
	/*if (able == false || f.getAble() == false)
    {
        std::cout << "Incorrect bureaucrat or form" << std::endl;
        return ;
    }
	if (f.getSig() >= grade)
    {
        sign = true;
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    }
	else
        std::cout << this->getName() << " couldn't sign" << f.getName() << " because his grade is too low" << std::endl;*/
}

bool                Bureaucrat::getAble()
{
	return able;
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
