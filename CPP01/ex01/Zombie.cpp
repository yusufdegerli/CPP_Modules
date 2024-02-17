#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie constructor called." << std::endl;
}

Zombie::Zombie(std::string name){
	this->name = name;
	std::cout << "Zombie name constructor called." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie destructor called." << std::endl;
}

void	Zombie::setName(std::string name){ this->name = name; }
std::string	Zombie::getName() const { return this->name; }

void	Zombie::announce() const{
	std::cout <<this->name<< ": Brrrraaaainnnzzzzz!!!" << std::endl;
}
