#include "../includes/Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFname(void)
{
	return (this->fname);
}

void Contact::setFname(std::string str)
{
	this->fname = str;
}

std::string Contact::getSname(void)
{
	return (this->sname);
}

void Contact::setSname(std::string str)
{
	this->sname = str;
}

std::string Contact::getNname(void)
{
	return (this->nname);
}

void Contact::setNname(std::string str)
{
	this->nname = str;
}

std::string Contact::getPhone(void)
{
	return (this->phone);
}

void Contact::setPhone(std::string str)
{
	this->phone = str;
}

std::string Contact::getSecret(void)
{
	return (this->secret);
}

void Contact::setSecret(std::string str)
{
	this->secret = str;
}
