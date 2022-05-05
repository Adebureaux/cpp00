#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
	Contact();
	~Contact();

	std::string getFname(void);
	void setFname(std::string str);
	std::string getSname(void);
	void setSname(std::string str);
	std::string getNname(void);
	void setNname(std::string str);
	std::string getPhone(void);
	void setPhone(std::string str);
	std::string getSecret(void);
	void setSecret(std::string str);

	private:
	std::string fname;
	std::string sname;
	std::string nname;
	std::string phone;
	std::string secret;
};

#endif
