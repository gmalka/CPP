#include "iter.hpp"

template <typename T>
void	uppp(T& p)
{
	p++;
}

template <typename T>
void    iter(T* mas, int length, void (*funct)(T&))
{
	for(int i = 0; i < length; i++)
	{
		funct(mas[i]);
	}
}

int main()
{
	int arrInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arrInt, 10, uppp);
	for(int i = 0; i < 10; i++)
    {
		std::cout << arrInt[i] << std::endl;
    }
}
