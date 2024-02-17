#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout<<"Default WrongCat Constructor called\n";
}

WrongCat::~WrongCat(){
	std::cout<<"Default WrongCat Destructor called\n";
}

WrongCat::WrongCat(WrongCat &cpy){
	this->type = cpy.getType();
}

WrongCat & WrongCat::operator=(WrongCat const &opr)
{
	this->type = opr.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout<<"WrongCat: Meow Meow!\n";
}

std::string WrongCat::getType() const{
	return this->type;
}
