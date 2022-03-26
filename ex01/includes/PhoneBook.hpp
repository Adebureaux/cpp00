#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	Contact contact[8];
	Contact AddContact();
	void ShowContact(PhoneBook directory);
	void DisplayDir(std::string str);
	int nbr;

	private:

};

#endif
