#include "PresidentialPardonForm.hpp"

/*Orthodox Cannonical AForm*/
Presidential::Presidential() : AForm(){
	std::cout<<"Presidential - Default Constructor";
}

Presidential::Presidential(const std::string name) : AForm(name, 25, 5){
	std::cout<<"Presidential - Constructor\n";
}

Presidential & Presidential::operator=(const Presidential &value){
	(void)value;
	return *this;
}

Presidential::~Presidential(){
	std::cout<<"Presidential - Default Destructor\n";
}

Presidential::Presidential(Presidential &cpy){
	(void)cpy;
	std::cout<<"Presidential - Copy Constructor\n";
}

void Presidential::exec()const{
	std::cout<<this->name << " has been pardoned by Zaphod Beeblebrox.\n";
}
