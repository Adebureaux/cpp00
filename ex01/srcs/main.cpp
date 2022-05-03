#include "../includes/PhoneBook.hpp"

int main(void)
{
	int i = 0;
	PhoneBook directory;
	std::string cmd;
	directory.nbr = 0;

	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
		if (!std::getline(std::cin, cmd))
			return (1);
		if (!cmd.compare("ADD"))
		{
			directory.contact[i] = directory.AddContact();
			i == 7 ? i = 0 : i++;
			if (directory.nbr < 8)
				directory.nbr++;
		}
		else if (!cmd.compare("SEARCH"))
			directory.DisplayList(directory);
		else if (!cmd.compare("EXIT"))
			break;
		std::cout << std::endl;
	}
	return (0);	
}
