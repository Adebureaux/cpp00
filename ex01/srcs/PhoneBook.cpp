#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

PhoneBook::PhoneBook()
{
	return;
}

int PhoneBook::getNbr(void)
{
	return (this->nbr);
}

void PhoneBook::setNbr(int nbr)
{
	this->nbr = nbr;
}

void PhoneBook::addContact(int i)
{
	std::string dst;

	std::cout << std::endl;
	do
		std::cout << "Type the first name : ";
	while (std::getline(std::cin, dst) && !dst[0]);
	this->contact[i].setFname(dst);
	do
		std::cout << "Type the second name : ";
	while (std::getline(std::cin, dst) && !dst[0]);
	this->contact[i].setSname(dst);
	do
		std::cout << "Type the nickname : ";
	while (std::getline(std::cin, dst) && !dst[0]);
	this->contact[i].setNname(dst);
	do
		std::cout << "Type the phone number : ";
	while (std::getline(std::cin, dst) && !dst[0]);
	this->contact[i].setPhone(dst);
	do
		std::cout << "Type the darkest secret : ";
	while (std::getline(std::cin, dst) && !dst[0]);
	this->contact[i].setSecret(dst);
	std::cout << std::endl;
}

void PhoneBook::displayIndexInfo(std::string str)
{
	std::string s(str, 0, 10);
	size_t len = s.length();
	for (size_t i = 0; i < 10 - len; i++)
		std::cout << ' ';
	if (str.length() > 10)
		s[9] = '.';
	std::cout << s;
}

void PhoneBook::displayIndex(PhoneBook directory, int num)
{
	std::cout << std::endl;
	std::cout << "Index          : " << num << std::endl;
	std::cout << "First name     : " << directory.contact[num - 1].getFname() << std::endl;
	std::cout << "Last name      : " << directory.contact[num - 1].getSname() << std::endl;
	std::cout << "Nickname       : " << directory.contact[num - 1].getNname() << std::endl;
	std::cout << "Phone number   : " << directory.contact[num - 1].getPhone() << std::endl;
	std::cout << "Darkset secret : " << directory.contact[num - 1].getSecret() << std::endl;
	std::cout << std::endl;
}

void PhoneBook::displayList(PhoneBook directory)
{
	int num;
	std::string index;

	std::cout << std::endl;
	for (int i = 0; i < directory.nbr; i++)
	{
		std::cout << "         " << i + 1 << '|';
		directory.displayIndexInfo(directory.contact[i].getFname());
		std::cout << '|';
		directory.displayIndexInfo(directory.contact[i].getSname());
		std::cout << '|';
		directory.displayIndexInfo(directory.contact[i].getNname());
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
				displayIndex(directory, num);
				break;
			}
		}
	}
}

PhoneBook::~PhoneBook()
{
	return;
}
