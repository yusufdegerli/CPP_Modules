#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout<<"Animal default constructor called\n";
}

Animal::Animal(Animal &cpy){
	*this = cpy;
	std::cout<<"Animal Copy Constructor called\n";
}

Animal::~Animal(){
	std::cout<<"Animal default destructor called\n";
}

Animal & Animal::operator=(Animal const & arg){
	this->type = arg.getType();
	return *this;
}

void Animal::makeSound() const{
	std::cout<<"An animal sound\n";
}

std::string Animal::getType() const{
	return this->type;
}
