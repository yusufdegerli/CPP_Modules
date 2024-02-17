#pragma once
#include <iostream>
#include "Animal.hpp"
class Dog : public Animal
{

	public:
	Dog();
	~Dog();
	Dog(Dog &cpy);
	Dog & operator=(Dog const & opr);
	std::string getType()const;
	void makeSound() const;
};
