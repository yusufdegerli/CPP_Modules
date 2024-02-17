#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout<<"Serializer - Constructor\n";
}

Serializer::~Serializer(){
	std::cout<<"Serializer - Destructor\n";
}

Serializer & Serializer::operator=(Serializer &val){
	std::cout<<"Serializer - operator\n";
	(void)val;
	return *this;
}

Serializer::Serializer(const Serializer &cpy){

	(void)cpy;
	std::cout<<"Serializer - Copy Constructor\n";
}

uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

