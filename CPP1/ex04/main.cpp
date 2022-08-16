#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::string	 new_name;
	char	symbol;
	char	*text, *buffer;
	int		current = 0, max = 10;
	if (argc != 4)
	{
		std::cout << "somth-g wring!" << std::endl;
		return (1);
	}
	new_name = std::string(argv[1]) + ".replace";
	std::ifstream fout(argv[1]);
	if (!fout.is_open())
	{
		std::cout << "Where's file, Jhonny?!" << std::endl;
        return (1);
	}
	std::ofstream fin(new_name);
	if (!fin.is_open())
	{
		std::cout << "Where's file, Jhonny?!" << std::endl;
		return (1);
	}
	text = new char[max + 1];
	text[10] = '\0';
	while (fout)
	{
		fout.read(&symbol, 1);
		if (!fout)
		{
			delete(text);
 			return 0;
		}
		if (symbol == ' ' || symbol == '\n')
		{
			if (std::string(text) == argv[2])
				fin << argv[3];
			else
				fin << text;
			current = 0;
			text[0] = '\0';
			fin << symbol;
		}
		else
		{
			if (current == max)
			{
				int	h;
				buffer = text;
				text = new char[max + 11];
				for(h = 0; h < max; h++)
					text[h] = buffer[h];
				text[h++] = symbol;
				text[h] = '\0';
				current++;
				max += 10;
				delete(buffer);
			}
			else
			{
				text[current++] = symbol;
				text[current] = '\0';
			}
		}
	}
}
