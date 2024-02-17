#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Thoughts";
	std::cout<<"Default Brain Constructor called\n";
}

Brain::Brain(Brain &cpy){
	std::cout << "Brain Copy Constructor called\n";
	*this = cpy;
}

Brain & Brain::operator=(Brain const &opr){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = opr.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout<<"Default Brain Destructor called\n";
}

std::string *Brain::getIdeas(){
    return ideas;
}
