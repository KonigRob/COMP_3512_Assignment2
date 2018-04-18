#include "Name.hpp"
#include <iostream>
#include <sstream>

Name::Name(std::string firstName, std::string middleName, std::string lastName)
	: firstName{ firstName }, middleName{ middleName }, lastName{ lastName }
{
	if (!is_valid_fullname(firstName, middleName, lastName)) {
		throw std::invalid_argument("Name::Name(string, string, string): invalid argument");
	}
}

bool Name::is_valid_fullname(std::string firstName, std::string middleName, std::string lastName)
{
	return is_valid_name(firstName) && is_valid_name(middleName) && is_valid_name(lastName);
}

bool Name::is_valid_name(std::string name)
{
	for (int i = 0; i < name.length; ++i) {
		if (!isalpha(name[i])) {
			return false;
		}
	}
}



Name Name::set_name(std::string firstName, std::string middleName, std::string lastName)
{
	if (!is_valid_fullname(firstName, middleName, lastName)) {
		throw std::invalid_argument("Name::set_name(string, string, string): invalid name");
	}
	Name copy(*this);
	this->firstName = firstName;
	this->middleName = middleName;
	this->lastName = lastName;
	return copy;
}

std::ostream& operator<<(std::ostream& os, const Name& n)
{
	std::ostringstream oss;
	oss << n.firstName << " "
		<< n.middleName << " "
		<< n.lastName;
	os << oss.str();
	return os;
}

std::istream& operator>>(std::istream& is, Name& n)
{
	std::string s;
	if (is >> s) {
		std::istringstream iss(s);
		std::string f, m, l;
		char c1, c2;
		if (iss >> f >> c1 >> m >> c2 >> l && c1 == ' ' && c2 == ' '
			&& Name::is_valid_fullname(f, m, l)) {
			n.firstName = f;
			n.middleName = m;
			n.lastName = l;
		}
		else {
			is.setstate(std::ios_base::failbit);
		}
	}
	return is;
}
