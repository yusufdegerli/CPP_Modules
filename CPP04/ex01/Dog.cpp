#include "Dog.hpp"

Dog::Dog(){
	this->brain = new Brain;
	this->type = "Dog";
	std::cout<<"Default Dog - Constructor\n";
}

Dog::~Dog(){
	delete this->brain;
	std::cout<<"Default Dog - Destructor\n";
}

void Dog::makeSound() const{
	std::cout<<"Bark Bark!\n";
}

Dog::Dog(Dog &cpy){
	*this = cpy;
	std::cout<<"Copy Dog - Constructor\n";
}

Dog & Dog::operator=(Dog const & opr)
{
	this->brain = new Brain(*opr.getBrain());
	this->type = opr.type;
	return *this;
}
std::string Dog::getType() const{
	return this->type;
}

Brain *Dog::getBrain()const{
	return brain;
}

void Dog::compareTo(Dog const & other_dog)const
{
	std::cout<< "Now we are comparing two doggies\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
