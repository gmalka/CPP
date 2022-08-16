#include "Tochar.hpp"

Tochar::Tochar(std::string const& target)
{
    if (target == "-inff" || target == "+inff" || target == "nanf" || target == "-inf" || target == "+inf" || target == "nan")
    {
        result = "impossible";
        return ;
    }
    try
    {
        char ch = toChar(target);
		if (ch <= 31 || ch == 127)
			result = "Non displayable";
		else
			result = ch;
    }
    catch(const std::exception& e)
    {
        result = "impossible";
    }
}

Tochar::Tochar(Tochar const& t)
{
	this->result = t.result;
}

Tochar::~Tochar()
{}

char	 Tochar::getIt()
{
	char	ch = result[0];

	if (result == "impossible")
	{
		return 0;
	}
	else if (result == "Non displayable" || ((ch >= 0 && ch <= 31) || ch == 127))
	{
		result = "Non displayable";
		return 0;
	}
    return ch;
}

void	Tochar::printIt() const
{
	std::cout << "char: " << result << std::endl;
}

int Tochar::toChar(std::string const& target)
{
	long int	number = 0;
	int	sig = 1, i = 0;
	if (target[0] == '-')
	{
		sig = -1;
		i++;
	}
	else if (target[0] == '+')
		i++;
	while (target[i] != '\0' && target[i] != '.')
	{
		if (target[i] >= '0' && target[i] <= '9')
		{
			number = number * 10 + (target[i] - '0');
		}
		else
		{
			throw WrongCharNumberException();
		}
		i++;
	}
	while (target[i])
	{
		if ((target[i] == 'f' && target[i + 1] != '\0') && !(target[i] >= '0' && target[i] <= '9'))
			throw WrongCharNumberException();
		i++;
	}
	return number * sig;
}

Tochar&	Tochar::operator=(Tochar const& t)
{
	this->result = t.result;
	return *this;
}

const char* Tochar::WrongCharNumberException::what() const throw()
{
	return "Incorrent symbol int string";
}
