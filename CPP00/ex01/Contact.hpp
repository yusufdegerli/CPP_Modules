#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <string.h>
#include <iomanip>

class Contact
{
	private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	public:
		Contact()
		{
			this->firstname = "";
			this->lastname = "";
			this->nickname = "";
			this->phonenumber = "";
			this->darkestsecret = "";
		};
public:
	void setFirstName(std::string firstN);
	std::string getFirstName();

	void setLastName(std::string ln);
	std::string getLastName();

	void setNickName(std::string nn);
	std::string getNickName();

	void setPhoneNumber(std::string pn);
	std::string getPhoneNumber();

	void setDarkestSecret(std::string ds);
	std::string getDarkestSecret();

};

#endif
