#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	std::cout<<"Default Cat Constructor called\n";
}

Cat::~Cat(){
	std::cout<<"Default Cat Destructor called\n";
}

Cat::Cat(Cat &cpy){
	this->type = cpy.getType();
}

Cat & Cat::operator=(Cat const & opr)
{
	this->type = opr.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout<<"Meow Meow!\n";
}

std::string Cat::getType() const{
	return this->type;
}
