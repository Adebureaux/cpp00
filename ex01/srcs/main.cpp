#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int main(int ac, char **av)
{
	PhoneBook directory;
	std::string cmd;

	std::cout << std::endl << "Type ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, cmd))
	{
		std::cout << std::endl;
		if (!std::strcmp(cmd.c_str(), "ADD"))
		{
			CreateContact();
		}
		else if (!std::strcmp(cmd.c_str(), "SEARCH"))
		{

		}
		else if (!std::strcmp(cmd.c_str(), "EXIT"))
			break;
		std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);	
}
