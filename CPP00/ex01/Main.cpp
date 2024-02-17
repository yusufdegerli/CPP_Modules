#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook pb;
	Contact contact;
	std::string input;
	int contactNum = 0;
	int i = 0;
	while(1)
	{
		std::cout<<"Please enter a command ADD, SEARCH, EXIT"<<std::endl;
		std::getline(std::cin, input);

		if(!input.compare("EXIT") && !std::cin.eof())
		{
			std::cout << "So long...\n";
			return 127;
		}
		else if(!input.compare("SEARCH") && !std::cin.eof())
		{
			pb.printContacts();
			pb.searchingContacts(contactNum);
		}
		else if(!input.compare("ADD") && !std::cin.eof())
		{
			Contact conta = pb.adding_person();
			pb.addContact(conta, i);
			contactNum++;
			i++;
			if(i == 8)
				i = 0;
		}
		else if (!std::cin.eof())
			std::cout<< "Oi m8! You wrote ADD, SEARCH or EXIT innit?"<<std::endl;
		else{
			std::cout<<std::endl;
			break;
		}
	}
}


