#include "Span.hpp"

int main()
{
	Span sp = Span(10000);
	for (int i = 0; i < 10000; i++)
	{
		sp.addNumber(i);
	}
	try
	{
		sp.addNumber(1241231);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
