#include <iostream>
#include <string>
#include <cmath>

class   Tofloat
{
	protected:
		std::string result;
		bool		checkFloat(std::string);
		bool		isNan;
	public:
		Tofloat(std::string const&);
        Tofloat(Tofloat const&);
        ~Tofloat();
        float getIt();
		void    printIt();

        Tofloat  &operator=(Tofloat const&);

        class WrongFloatNumberException: public std::exception
        {
            const char* what() const throw();
        };
};
