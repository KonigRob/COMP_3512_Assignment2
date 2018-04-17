#pragma once
#include <string>


class Name
{
	std::string firstName;
	std::string middleName;
	std::string lastName;
public:
	Name() :
		firstName{ "" }, middleName{ "" }, lastName{ "" } {};
	Name(std::string fName, std::string mName, std::string lName) :
		firstName{ fName }, middleName{ mName }, lastName{ lName } {};
	std::string getFirstName() { return firstName; }
	void setFirstName(std::string fName) : firstName{ fName } {};
	std::string getMiddleName() { return middleName; }
	std::string getLastName() { return lastName; }
	
};