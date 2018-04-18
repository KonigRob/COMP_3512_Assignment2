#pragma once
#include <string>


class Name
{
public:
	Name(std::string firstName = "", std::string middleName = "", std::string lastName = "");
	std::string getFirstName() const { return firstName; }
	std::string getMiddleName() const { return middleName; }
	std::string getLastName() const { return lastName; }

	static bool is_valid_fullname(std::string, std::string, std::string);
	static bool is_valid_name(std::string);
	Name set_name(std::string, std::string, std::string);
	
	friend std::ostream& operator<<(std::ostream&, const Name&);
	friend std::istream& operator>>(std::istream&, Name&);

private:
	std::string firstName;
	std::string middleName;
	std::string lastName;
};