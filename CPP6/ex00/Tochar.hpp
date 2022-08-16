#include <iostream>
#include <string>

class	Tochar
{
	protected:
		std::string	result;
		int			toChar(std::string const& target);
	public:
		Tochar(std::string const&);
		Tochar(Tochar const&);
		~Tochar();
		char		getIt();
		void		printIt() const;

		Tochar		&operator=(Tochar const&);

		class WrongCharNumberException: public std::exception
		{
			const char*	what() const throw();
		};
};
