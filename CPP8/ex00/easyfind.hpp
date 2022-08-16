#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

class NoMatchesException: public std::exception
{
    public:
        const char* what() const throw()
        {
            return "No matches!";
        }
};

template <typename T>
typename T::iterator	easyfind(T& cnt, int i)
{
	typename T::iterator iter = find(cnt.begin(), cnt.end(), i);
	if (cnt.end() == iter && *iter != i)
		throw NoMatchesException();
	return iter;
}
