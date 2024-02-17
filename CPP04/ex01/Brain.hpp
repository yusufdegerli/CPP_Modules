#pragma once
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain &cpy);
		~Brain();
		Brain & operator=(Brain const &opr);
		std::string *getIdeas();
};
