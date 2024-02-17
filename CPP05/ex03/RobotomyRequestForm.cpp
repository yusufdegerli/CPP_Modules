#include "RobotomyRequestForm.hpp"

/*Orthodox Cannonical AForm*/
Robotomy::Robotomy() : AForm(){
	std::cout<<"Robotomy - Default Constructor\n";
}

Robotomy::Robotomy(const std::string name) : AForm(name, 72, 45){
	std::cout<<"Robotomy - Constructor\n";
}

Robotomy & Robotomy::operator=(const Robotomy &value){
	(void)value;
	return *this;
}

Robotomy::~Robotomy(){
	std::cout<<"Robotomy - Default Destructor\n";
}

Robotomy::Robotomy(Robotomy &cpy){
	(void)cpy;
	std::cout<<"Robotomy - Copy Constructor\n";
}

void Robotomy::exec()const{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int random = std::rand() % 101;
	if(random >= 50)
		std::cout << this->name << " has been robotomized\n";
	else
		std::cout << this->name << ": robotomized failed!\n";
}
