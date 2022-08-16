#include "easyfind.hpp"

int main()
{
	std::vector<float> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	try
	{
		std::vector<float>::iterator iter = easyfind(vect, 1);
		std::cout << *iter << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
