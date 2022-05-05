#include <iostream>

std::string str_toupper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		std::cout << str_toupper(av[i]);
	std::cout << std::endl;
	return (0);
}
