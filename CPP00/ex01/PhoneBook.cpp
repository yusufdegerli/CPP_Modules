#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::addContact(Contact contact, int i)
{
	this->contacts[i] = contact;
}

void PhoneBook::printContacts(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;

	std::cout<<" |----------|----------|----------|----------|"<<std::endl;
	std::cout<<" |   Index  |   Name   | LastName | NickName |"<<std::endl;
	std::cout<<" |----------|----------|----------|----------|"<<std::endl;
	for(int i = 0; i < 8; i++)
	{
		firstName = this->contacts[i].getFirstName();
		lastName = this->contacts[i].getLastName();
		nickname = this->contacts[i].getNickName();
		std::cout << " |" << std::setw(10) << i + 1 << "|";
		if (firstName.length() > 10)
			std::cout << firstName.substr(0, 9) << "."
					  << "|";
		else
			std::cout << std::setw(10) << firstName << "|";
		if (lastName.length() > 10)
			std::cout << lastName.substr(0, 9) << "."
					  << "|";
		else
			std::cout << std::setw(10) << lastName << "|";
		if (nickname.length() > 10)
			std::cout << nickname.substr(0, 9) << "."
					  << "|";
		else
			std::cout << std::setw(10) << nickname << "| ";
		std::cout << "\n";
	}
	std::cout << " |----------|----------|----------|----------|"
			  << "\n\n";
}
