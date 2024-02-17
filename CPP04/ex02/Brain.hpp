#pragma once
#include <iostream>

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain();
		Brain(Brain &cpy);
		~Brain();
		Brain & operator=(Brain const &opr);
		std::string* getIdeas();
};
