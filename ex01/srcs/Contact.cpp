#include "../includes/Contact.hpp"

Contact::Contact()
{
	return;
}

void CreateContact()
{
	do
		std::cout << "Type the first name : ";
	while (std::getline(std::cin, fname) && !fname[0]);
	do
		std::cout << "Type the second name : ";
	while (std::getline(std::cin, sname) && !sname[0]);
	do
		std::cout << "Type the nickname : ";
	while (std::getline(std::cin, nname) && !nname[0]);
	do
		std::cout << "Type the phone number : ";
	while (std::getline(std::cin, phone) && !phone[0]);
	do
		std::cout << "Type the darkest secret : ";
	while (std::getline(std::cin, secret) && !secret[0]);
	std::cout << std::endl;
}

Contact::~Contact()
{
	return;
}
