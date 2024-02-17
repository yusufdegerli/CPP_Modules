#include "Intern.hpp"

const std::string Intern::AformNames[3] = {"robotomy", "shrubbery", "presidential"};
const funcs Intern::AformFuncs[3] = {&Intern::robotomyCreater, &Intern::shrubberyCreater, &Intern::presidentialCreater};

Intern::Intern(){
	std::cout<<"Intern - Default Constructor\n";
}

Intern::~Intern(){
	std::cout<<"Intern - Default Destructor\n";
}

Intern::Intern(Intern &cpy){
	(void)cpy;
	std::cout<<"Intern - Copy Constructor\n";
}

Intern & Intern::operator=(const Intern &value){
	(void)value;
	return *this;
}

AForm* Intern::presidentialCreater(const std::string& target)const{
	return (new Presidential(target));
}

AForm* Intern::robotomyCreater(const std::string& target)const{
	return (new Robotomy(target));
}

AForm* Intern::shrubberyCreater(const std::string& target)const{
	return (new Shrubbery(target));
}

AForm* Intern::makeForm(const std::string& AformName, const std::string& target)const{
	for(int i = 0; i < 3; i++)
		if(!AformName.compare(AformNames[i]))
			return (this->*AformFuncs[i])(target);
		throw WrongFormNameException();
}

const char *Intern::WrongFormNameException::what() const throw(){
	return "Form name not matched with default form names!";
}
