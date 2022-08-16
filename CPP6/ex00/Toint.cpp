#include "Toint.hpp"

Toint::Toint(std::string const& target)
{
    if (target == "-inff" || target == "+inff" || target == "nanf" || target == "-inf" || target == "+inf" || target == "nan")
    {
        result = "impossible";
        return ;
    }
    try
    {
        int number = toInt(target);
        result = std::to_string(number);
    }
    catch(const std::exception& e)
    {
        result = "impossible";
    }
}

Toint::Toint(Toint const& t)
{
    this->result = t.result;
}

Toint::~Toint()
{}

int		Toint::getIt()
{
	if (result != "impossible")
		return atoi(result.c_str());
	else
		return 0;
}

void    Toint::printIt() const
{
	std::cout << "int: " << result << std::endl;
}

int Toint::toInt(std::string const& target)
{
    long int    number = 0;
    int sig = 1, i = 0;
    if (target[0] == '-')
    {
        sig = -1;
        i++;
    }
	if (target[0] == '+')
		i++;
    while (target[i] != '\0' && target[i] != '.')
    {
        if (target[i] >= '0' && target[i] <= '9')
        {
            number = number * 10 + (target[i] - '0');
        }
        else
            throw WrongIntNumberException();
        i++;
    }
	while (target[i])
    {
        if ((target[i] == 'f' && target[i + 1] != '\0') && !(target[i] >= '0' && target[i] <= '9'))
            throw WrongIntNumberException();
        i++;
    }
    return number * sig;
}

Toint& Toint::operator=(Toint const& t)
{
    this->result = t.result;
    return *this;
}

const char* Toint::WrongIntNumberException::what() const throw()
{
    return "Incorrent symbol int in string";
}
