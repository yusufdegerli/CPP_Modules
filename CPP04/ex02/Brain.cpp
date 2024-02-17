#include "Brain.hpp"

Brain::Brain(){
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Thoughts";
	std::cout<<"Default Brain Constructor called\n";
}

Brain::Brain(Brain &cpy){
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.getIdeas()[i] + " stolen";
	std::cout << "Brain Copy Constructor called\n";
}

Brain & Brain::operator=(Brain const &opr){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = opr.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout<<"Default Brain Destructor called\n";
	delete [] this->ideas;
}

std::string *Brain::getIdeas(){
    return ideas;
}
