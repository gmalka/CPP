#include <iostream>
#include <string>

int	ft_len(char *str)
{
	if (!str)
		return 0;
	int i = 0;
	while (str[i])
		i++;
	return i;
}

int main(int argc, char *argv[])
{
	int		len = 0, g = 0;
	char	*str;

	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
	for (int i = 1; i < argc; i++)
	{
		len += ft_len(argv[i]);
	}
	str = new char[len];
	str[len] = '\0';
	for (int i = 1; i < argc; i++)
	{
		int f = 0;
		while (argv[i][f])
		{
			str[g++] = toupper(argv[i][f++]);
		}
	}
	std::cout << str << std::endl;
	free(str);
}
