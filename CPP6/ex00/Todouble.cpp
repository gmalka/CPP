#include "Todouble.hpp"
#include <string>

Todouble::Todouble(std::string const& target)
{
    try
    {
        checkDouble(target);
        if (target == "nan" | target == "nanf")
		{
            result = "nan";
			isNan = true;
		}
        else if (target == "-inf" || target == "-inff")
		{
            result = "-inf";
			isNan = true;
		}
        else if (target == "+inf" || target == "+inff")
		{
            result = "+inf";
			isNan = true;
		}
        else
		{
            result = target;
			isNan = false;
		}
    }
    catch(const std::exception& e)
    {
		isNan = true;
        result = "impossible";
    }
}

Todouble::Todouble(Todouble const& t)
{
    this->result = t.result;
}

Todouble::~Todouble()
{}

double   Todouble::getIt()
{
    return std::atof(result.c_str());
}

void    Todouble::printIt()
{
    int     check = 0, i;

	if (isNan == true)
	{
		std::cout  << "double: "<< result << std::endl;
		return ;
	}
	if (result[0] == '+')
		result.erase(0, 1);
	check = result.find(".", 0);
	i = result.find("f", 0);
    if (i > 0)
    {
		result.erase(i);
    }
	if (check == -1)
		std::cout  << "double: "<< result << ".0" << std::endl;
	else
		std::cout  << "double: "<< result << std::endl;
}

bool    Todouble::checkDouble(std::string name)
{
    int     i = 0;
    if (name[0] == '\0')
        throw WrongDoubleNumberException();
    if (name == "-inff" || name == "+inff" || name == "nanf" || name == "-inf" || name == "+inf" || name == "nan")
        return true;
	if (name[0] == '-' || name[0] == '+')
        i++;
    while (name[i])
    {
        if ((name[i] < '0' || name[i] > '9') && name[i] != '.' && name[i] != 'f')
            throw WrongDoubleNumberException();
        if (name[i] =='.' && (name[i + 1] == '\0' || name[i + 1] == 'f'))
            throw WrongDoubleNumberException();
		if (name[i] == 'f' && name[i + 1] != '\0')
			throw WrongDoubleNumberException();
        i++;
    }
    return true;
}

Todouble& Todouble::operator=(Todouble const& t)
{
    this->result = t.result;
    return *this;
}

const char* Todouble::WrongDoubleNumberException::what() const throw()
{
    return "Incorrent symbol double in string";
}
