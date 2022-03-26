#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int main(int ac, char **av)
{
	PhoneBook directory;
	std::string cmd;
	int i = 0;
	directory.nbr = 0;

	std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, cmd))
	{
		std::cout << std::endl;
		if (!std::strcmp(cmd.c_str(), "ADD"))
		{
			directory.contact[i] = directory.AddContact();
			i == 7 ? i = 0 : i++;
			if (directory.nbr < 8)
				directory.nbr++;
		}
		else if (!std::strcmp(cmd.c_str(), "SEARCH"))
			directory.ShowContact(directory);
		else if (!std::strcmp(cmd.c_str(), "EXIT"))
			break;
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);	
}
