#include "Form.hpp"

Form::Form(): name("JHA"), g_sig(150), g_exe(150)
{
	sign = false;
	able = true;
}

Form::Form(std::string name, int sig, int exe): name(name), g_sig(sig), g_exe(exe)
{
	able = true;
	try
	{
		if (sig <= 0 || exe <= 0)
			throw GradeTooHighException();
		if (sig > 150 || exe > 150)
			throw GradeTooLowException();
	}
	catch (const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		able = false;
	}
	sign = false;
}

Form::Form(Form const& f): name(f.name), g_sig(f.g_sig), g_exe(f.g_exe)
{
	sign = false;
	able = f.able;
}

Form::~Form()
{
	std::cout << "Form " << this->name << " destroyed" << std::endl;
}

void    Form::setAble(bool b)
{
	able = b;
}

void    Form::beSigned(Bureaucrat& bur)
{
	if (able == false || bur.getAble() == false)
	{
		std::cout << "Incorrect bureaucrat or form" << std::endl;
		return ;
	}
	if (g_sig >= bur.getGrade())
	{
		sign = true;
		std::cout << bur.getName() << " signed " << this->name << std::endl;
	}
	else
		std::cout << bur.getName() << " couldn't sign" << this->name << " because his grade is too low" << std::endl;
}

std::string    Form::getName() const
{
	return name;
}

bool        Form::getAble() const
{
	return this->able;
}

int     Form::getSig() const
{
	return g_sig;
}

int     Form::getExe() const
{
	return g_exe;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade is too hight";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form named " << f.getName() << ", Form grade required to sign is " << f.getSig() << ", grade required to execute is " << f.getExe() << std::endl;
	return os;
}
