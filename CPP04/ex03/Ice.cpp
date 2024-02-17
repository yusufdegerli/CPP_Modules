#include "Ice.hpp"

Ice::Ice(){
	this->type = "ice";
	std::cout<<"Ice - Constructor\n";
}

Ice::~Ice(){
	std::cout<<"Ice - Destructor\n";}

Ice::Ice(Ice &cpy) : type(cpy.getType()){
	std::cout<<this->type<<" builded from copy\n";
	this->type = "ice";}

Ice & Ice::operator=(Ice const & opr){
	this->type = opr.type;
	return *this;}

std::string const &Ice::getType()const{
	return this->type;}

Ice* Ice::clone()const{
	Ice *iceThunder = new Ice;
	return iceThunder;
}
