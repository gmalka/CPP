#include "Harl.hpp"

int main(int argc, char *argv[])
{
	int			i;
	std::string	level[8] = {"debug", "info", "warning", "error", "DEBUG", "INFO", "WARNING", "ERROR"};
	if (argc != 2)
		return (std::cout << "Smth-g wrong" << std::endl, 1);
	for(int t = 0; t < 8; t++)
	{
		if (level[t] == std::string(argv[1]))
		{
			i = t;
			break;
		}
	}
	if (i >= 4)
		i -= 4;
	Harl harl = Harl();
	switch (i)
	{
		case 0:
			harl.complain("debug");
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 1:
			harl.complain("info");
			harl.complain("warning");
			harl.complain("error");
			break;
		case 2:
			harl.complain("warning");
			harl.complain("error");
			break;
		case 3:
			harl.complain("error");
			break;
	}
	return 0;
}
