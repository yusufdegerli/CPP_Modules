#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout<<"Animal - Default Constructor\n";
}
Animal::~Animal()
{
	std::cout<<"Animal - Default Destructor\n";
}

void Animal::makeSound() const{
	std::cout<<"An animal sound\n";
}

std::string Animal::getType() const{
	return this->type;
}

Animal::Animal(Animal & cpy){
	std::cout<<"Animal - Copy Constructor\n";
	*this = cpy;
}

Animal & Animal::operator=(Animal const & arg){
	std::cout<<"Animal - Assignment Operator\n";
	this->type = arg.getType();
	return *this;
}
