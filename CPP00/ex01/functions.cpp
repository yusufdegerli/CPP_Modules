#include "Contact.hpp"
#include "PhoneBook.hpp"


int PhoneBook::ft_atoi(const std::string &str)
{
	int result = 0;

	size_t i = 0;

	while(i < str.length() && isdigit(str[i]))
	{
		int digit = str[i] - '0';
		result = result * 10 + digit;
		i++;
	}

	return result;
}

void PhoneBook::info(const std::string &str)
{
	int indeks = ft_atoi(str) - 1;
	std::cout << "\nFirst name: " << this->contacts[indeks].getFirstName() << "\n";
	std::cout << "Last name: " << this->contacts[indeks].getLastName() << "\n";
	std::cout << "NickName: " << this->contacts[indeks].getNickName() << "\n";
	std::cout << "Phone number: " << this->contacts[indeks].getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << this->contacts[indeks].getDarkestSecret() << "\n";
}

bool PhoneBook::nbr_ctl(const std::string &str)
{
	for(size_t i = 0; i < str.length(); i++)
		if(!isdigit(str[i]))
		{
			std::cout << "ERROR! Only the digits"<<std::endl;
			return false;
		}
	return true;
}

bool PhoneBook::space_ctl(const std::string &str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if(str[i] == ' ' || str[i] == '\t')
		return true;
	}
	return false;
}

bool PhoneBook::input_ctl(std::string str)
{
	PhoneBook pb;
	if(str.empty() || pb.space_ctl(str))
	{
		std::cout<<"ERROR! input is empty or wrong"<<std::endl;
		return false;
	}
	return true;
}

Contact PhoneBook::adding_person(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	Contact contact;
	name:
	std::cout<< "input your name: ";
	std::getline(std::cin, firstName);
	if(input_ctl(firstName) == true)
		contact.setFirstName(firstName);
	else
		goto name;
	surname:
	std::cout<< "input your lastname: ";
	std::getline(std::cin, lastName);
	if(input_ctl(lastName) == true)
		contact.setLastName(lastName);
	else
		goto surname;
	nick:
	std::cout<< "input your nickname: ";
	std::getline(std::cin, nickName);
	if(input_ctl(nickName) == true)
		contact.setNickName(nickName);
	else
		goto nick;
	phone:
	std::cout<< "input your phone number: ";
	std::getline(std::cin, phoneNumber);
	if(input_ctl(phoneNumber) == true && nbr_ctl(phoneNumber) == true)
		contact.setPhoneNumber(phoneNumber);
	else
		goto phone;
	secret:
	std::cout<< "input your darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if(input_ctl(darkestSecret) == true)
		contact.setDarkestSecret(darkestSecret);
	else
		goto secret;

	return contact;
}
bool PhoneBook::isValidNumber(const std::string &str)
{
	int nbr = ft_atoi(str);
	return (nbr >= 1 && nbr <= 8);
}
void PhoneBook::searchingContacts(int contactNum)
{
	std::string input;
	if(contactNum > 0)
	{
		start:
		std::cout<< "input id of the contact you wanna reach reach: ";
		std::getline(std::cin, input);
		if(input.empty())
		{
			std::cout<< "id must not be empty"<<std::endl;
			goto start;
		}
		else if(!nbr_ctl(input))
			goto start;
		else if(!isValidNumber(input))
		{
			std::cout << "it must be between 1-8" <<std::endl;
			goto start;
		}
		else if(contactNum >= ft_atoi(input))
		{
			info(input);
		}
		else
			{
				std::cout << "only first " << contactNum << " contacts exist" <<std::endl;
				goto start;
			}
	}
}
