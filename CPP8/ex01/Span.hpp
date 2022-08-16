#include <vector>
#include <iostream>
#include <algorithm>

class Span {
	private:
		unsigned int		n;
		unsigned int		index;
		std::vector<int>	v;
	public:
		Span(unsigned int);
		Span(Span const&);
		~Span();

		Span&	operator=(Span const&);
		void	addNumber(unsigned int);
		void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		int		shortestSpan();
		int		longestSpan();

	class outOfBoundsException: public std::exception
	{
		const char* what() const throw();
	};
};
