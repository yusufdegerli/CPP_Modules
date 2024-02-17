#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
	this->brain = new Brain;
	std::cout<<"Default Cat Constructor called\n";
}

Cat::~Cat(){
	delete this->brain;
	std::cout<<"Default Cat Destructor called\n";
}

Cat::Cat(Cat &cpy){
	*this = cpy;
}

Cat & Cat::operator=(Cat const & opr)
{
	this->brain = new Brain(*opr.getBrain());
	this->type = opr.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout<<"Meow Meow!\n";
}

std::string Cat::getType() const{
	return this->type;
}

Brain *Cat::getBrain()const{
	return brain;
}

void Cat::compareTo(Cat const &other_cat) const{
	std::cout << "Now comparing two kitties\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
