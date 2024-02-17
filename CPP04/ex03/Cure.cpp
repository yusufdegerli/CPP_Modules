#include "Cure.hpp"

Cure::Cure(){
	this->type = "cure";
	std::cout<<"Cure - Constructor\n";
}

Cure::~Cure(){
	std::cout<<"Cure - Destructor\n";
}

Cure::Cure(Cure &cpy) : type(cpy.getType()){
	std::cout<<this->type << "Builded from copy\n";
	this->type = "cure";}

Cure & Cure::operator=(Cure const & opr){
	this->type = opr.type;
	return *this;}

std::string const &Cure::getType()const{
	return this->type;}

Cure* Cure::clone()const{
	Cure *antidote = new Cure;
	return antidote;
}

void Cure::use(ICharacter & target){
	std::cout<<"* heals "<<target.getName()<<"\'s wounds *\n";
}
