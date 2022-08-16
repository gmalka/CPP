#include "Tochar.hpp"
#include "Toint.hpp"
#include "Tofloat.hpp"
#include "Todouble.hpp"

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		std::cout << "Pls more arguments" << std::endl;
		return -1;
	}
	Tochar		q(argv[1]);
	Toint		w(argv[1]);
	Tofloat		r(argv[1]);
	Todouble	e(argv[1]);
	q.printIt();
	w.printIt();
	r.printIt();
	e.printIt();
}
