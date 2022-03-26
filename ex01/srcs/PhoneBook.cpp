#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

PhoneBook::PhoneBook()
{
	return;
}

Contact PhoneBook::AddContact()
{
	Contact contact;
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

void PhoneBook::DisplayDir(std::string str)
{
	std::string s(str, 0, 10);
	size_t len = s.length();
	for (size_t i = 0; i < 10 - len; i++)
		std::cout << ' ';
	if (str.length() > 10)
		s[9] = '.';
	std::cout << s;
}

void PhoneBook::ShowContact(PhoneBook directory)
{
	int i = -1;

	for (int i = 0; i < directory.nbr; i++)
	{
		std::cout << "         " << i + 1 << '|';
		directory.DisplayDir(directory.contact[i].fname);
		std::cout << '|';
		directory.DisplayDir(directory.contact[i].sname);
		std::cout << '|';
		directory.DisplayDir(directory.contact[i].nname);
		std::cout << std::endl;
	}
}

PhoneBook::~PhoneBook()
{
	return;
}
