#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout<<"AMateria - Constructor\n";}

AMateria::AMateria(std::string const & type): type(type){
	std::cout <<"AMateria - Type Constructor\n";
}

AMateria::~AMateria(){
	std::cout<<"AMateria - Destructor\n";}

AMateria::AMateria(AMateria &cpy): type(cpy.type){
	this->type = "AMateria";
	std::cout<<"AMateria - Copy Constructor\n";
}

std::string const &AMateria::getType()const{
	return this->type;}

void AMateria::use(ICharacter& target){
	std::cout<<"AMateria abstractly used on "<<target.getName()<<std::endl;
}
