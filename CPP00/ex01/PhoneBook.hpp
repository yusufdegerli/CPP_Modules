#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string.h>
class PhoneBook
{
	private:
		Contact contacts[8];

	public:
		PhoneBook()
		{
			for(int i = 0; i < 8; i++)
					this->contacts[i] = Contact();
		};
	void printContacts(void);
	Contact adding_person(void);
	bool input_ctl(std::string str);
	bool space_ctl(const std::string &str);
	bool nbr_ctl(const std::string &str);
	void addContact(Contact contact, int i);
	void searchingContacts(int contactNum);
	bool isValidNumber(const std::string &str);
	int ft_atoi(const std::string &str);
	void info(const std::string &str);
};

#endif
