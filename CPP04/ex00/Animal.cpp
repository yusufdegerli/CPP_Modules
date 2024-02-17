#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout<<"Animal default constructor called\n";
}
Animal::~Animal()
{
	std::cout<<"Animal default destructor called\n";
}

void Animal::makeSound() const{
	std::cout<<"An animal sound\n";
}

std::string Animal::getType() const{
	return this->type;
}

Animal & Animal::operator=(const Animal &other){
	this->type = other.getType();
	return *this;
}

Animal::Animal(Animal & cpy){
	*this = cpy;
	std::cout<<"Animal - Copy Constructor\n";
}
