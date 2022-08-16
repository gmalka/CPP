#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data*	data = new Data();
	data->i = 10;
	uintptr_t	e;
	e = serialize(data);
	data = deserialize(e);
	std::cout << data->i << std::endl;
}
