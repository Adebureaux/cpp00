#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

PhoneBook::PhoneBook()
{
	return;
}

Contact PhoneBook::AddContact()
{
	Contact contact;

	std::cout << std::endl;
	do
		std::cout << "Type the first name : ";
	while (std::getline(std::cin, contact.fname) && !contact.fname[0]);
	do
		std::cout << "Type the second name : ";
	while (std::getline(std::cin, contact.sname) && !contact.sname[0]);
	do
		std::cout << "Type the nickname : ";
	while (std::getline(std::cin, contact.nname) && !contact.nname[0]);
	do
		std::cout << "Type the phone number : ";
	while (std::getline(std::cin, contact.phone) && !contact.phone[0]);
	do
		std::cout << "Type the darkest secret : ";
	while (std::getline(std::cin, contact.secret) && !contact.secret[0]);
		std::cout << std::endl;
	return (contact);
}

void PhoneBook::DisplayIndexInfo(std::string str)
{
	std::string s(str, 0, 10);
	size_t len = s.length();
	for (size_t i = 0; i < 10 - len; i++)
		std::cout << ' ';
	if (str.length() > 10)
		s[9] = '.';
	std::cout << s;
}

void PhoneBook::DisplayIndex(PhoneBook directory, int num)
{
	std::cout << std::endl;
	std::cout << "Index          : " << num << std::endl;
	std::cout << "First name     : " << directory.contact[num - 1].fname << std::endl;
	std::cout << "Last name      : " << directory.contact[num - 1].sname << std::endl;
	std::cout << "Nickname       : " << directory.contact[num - 1].nname << std::endl;
	std::cout << "Phone number   : " << directory.contact[num - 1].phone << std::endl;
	std::cout << "Darkset secret : " << directory.contact[num - 1].secret << std::endl;
	std::cout << std::endl;
}

void PhoneBook::DisplayList(PhoneBook directory)
{
	int num;
	std::string index;

	std::cout << std::endl;
	for (int i = 0; i < directory.nbr; i++)
	{
		std::cout << "         " << i + 1 << '|';
		directory.DisplayIndexInfo(directory.contact[i].fname);
		std::cout << '|';
		directory.DisplayIndexInfo(directory.contact[i].sname);
		std::cout << '|';
		directory.DisplayIndexInfo(directory.contact[i].nname);
		std::cout << std::endl;
	}
	if (directory.nbr)
	{
		std::cout << std::endl;
		while (1)
		{
			std::cout << "Type the index : ";
			if (!std::getline(std::cin, index))
				break;
			num = std::isdigit(index[0]) ? std::atoi(index.c_str()) : 0;
			if (num > 0 && num <= directory.nbr)
			{
				DisplayIndex(directory, num);
				break;
			}
		}
	}
}

PhoneBook::~PhoneBook()
{
	return;
}
