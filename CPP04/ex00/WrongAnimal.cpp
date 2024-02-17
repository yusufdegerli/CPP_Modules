#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout<<"WrongAnimal default constructor called\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout<<"WrongAnimal default constructor called\n";
}

void WrongAnimal::makeSound()const{
	std::cout<<"A WrongAnimal sound\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal & cpy){
	*this = cpy;
	std::cout<<"WrongAnimal - copy constructor\n";
}

std::string WrongAnimal::getType() const{
	return this->type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	this->type = other.getType();
	return *this;
}
