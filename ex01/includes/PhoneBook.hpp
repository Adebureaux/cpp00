#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();

	int getNbr(void);
	void setNbr(int nbr);
	void addContact(int i);
	void displayList(PhoneBook directory);

	private:
	int nbr;
	Contact contact[8];
	void displayIndexInfo(std::string str);
	void displayIndex(PhoneBook directory, int num);
};

#endif
