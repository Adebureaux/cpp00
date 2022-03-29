#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>

class Contact
{
	public:
	Contact();
	~Contact();
	std::string fname;
	std::string sname;
	std::string nname;
	std::string phone;
	std::string secret;

	private:
	int filled;

};

#endif
