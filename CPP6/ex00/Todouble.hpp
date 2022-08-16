#include <iostream>
#include <string>
#include <cmath>

class   Todouble
{
    protected:
        std::string result;
        bool        checkDouble(std::string);
		bool        isNan;
    public:
        Todouble(std::string const&);
        Todouble(Todouble const&);
        ~Todouble();
        double	 getIt();
        void    printIt();

        Todouble  &operator=(Todouble const&);

        class WrongDoubleNumberException: public std::exception
        {
            const char* what() const throw();
        };
};
