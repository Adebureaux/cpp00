#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	Contact contact[8];
	Contact AddContact();
	void DisplayList(PhoneBook directory);
	void DisplayIndexInfo(std::string str);
	void DisplayIndex(PhoneBook directory, int num);
	int nbr;
	int stop;

	private:

};

#endif
