#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	std::cout<<"Default Dog constructor called\n";
}

Dog::~Dog(){
	std::cout<<"Default Dog destructor called\n";
}

void Dog::makeSound() const{
	std::cout<<"Bark Bark!\n";
}

Dog::Dog(Dog &cpy){
	this->type = cpy.getType();
}

Dog & Dog::operator=(Dog const & opr)
{
	this->type = opr.type;
	return *this;
}
std::string Dog::getType() const{
	return this->type;
}
