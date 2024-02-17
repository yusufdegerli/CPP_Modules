#pragma once
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	~Cat();
	Cat(Cat &cpy);
	Cat & operator=(Cat const & opr);
	std::string getType() const;
	void makeSound() const;
};
