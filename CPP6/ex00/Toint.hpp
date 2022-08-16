#include <iostream>
#include <string>

class   Toint
{
	protected:
		std::string result;
		int toInt(std::string const& target);
	public:
		Toint(std::string const&);
        Toint(Toint const&);
        ~Toint();
        int		getIt();
		void	printIt() const;

        Toint	&operator=(Toint const&);

        class WrongIntNumberException: public std::exception
        {
            const char* what() const throw();
        };
};
