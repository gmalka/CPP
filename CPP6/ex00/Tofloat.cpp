#include "Tofloat.hpp"
#include <string>

Tofloat::Tofloat(std::string const& target)
{
	try
	{
		checkFloat(target);
		if (target == "nan" | target == "nanf")
		{
			result = "nanf";
			isNan = true;
		}
		else if (target == "-inf" || target == "-inff")
		{
			result = "-inff";
			isNan = true;
		}
		else if (target == "+inf" || target == "+inff")
		{
            result = "+inff";
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
		result = "impossible";
		isNan = true;
	}
}

Tofloat::Tofloat(Tofloat const& t)
{
    this->result = t.result;
	this->isNan = t.isNan;
}

Tofloat::~Tofloat()
{}

float	Tofloat::getIt()
{
	return std::atof(result.c_str());
}

void    Tofloat::printIt()
{
	int		check = 0;
	for (int i = 0; i < result.size(); i++)
	{
		if (result[i] == '.')
		{
			check = 1;
			break;
		}
	}
	if (result[0] == '+')
        result.erase(0, 1);
	if (!isNan && result[result.size() - 1] != 'f')
	{
		if (check == 1)
			std::cout << "float: " << result << "f" << std::endl;
		else
			std::cout << "float: " << result << ".0f" << std::endl;
	}
	else
		std::cout << "float: " << result << std::endl;
}

bool    Tofloat::checkFloat(std::string name)
{
	int		i = 0;
	if (name[0] == '\0')
		throw WrongFloatNumberException();
	if (name == "-inff" || name == "+inff" || name == "nanf" || name == "-inf" || name == "+inf" || name == "nan")
		return true;
	if (name[0] == '-' || name[0] == '+')
		i++;
	while (name[i])
	{
		if ((name[i] < '0' || name[i] > '9') && name[i] != '.' && name[i] != 'f')
			throw WrongFloatNumberException();
		else if (name[i] =='.' && (name[i + 1] == '\0' || name[i + 1] == 'f'))
			throw WrongFloatNumberException();
		else if (name[i] == 'f' && name[i + 1] != '\0')
            throw WrongFloatNumberException();
		i++;
	}
	return true;
}

Tofloat& Tofloat::operator=(Tofloat const& t)
{
    this->result = t.result;
    return *this;
}

const char* Tofloat::WrongFloatNumberException::what() const throw()
{
    return "Incorrent symbol float in string";
}
