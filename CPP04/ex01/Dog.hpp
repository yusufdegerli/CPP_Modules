#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain *brain;
	std::string type;

	public:
	Dog();
	~Dog();
	Dog(Dog &cpy);
	Dog & operator=(Dog const & opr);
	std::string getType()const;
	void makeSound() const;
	Brain *getBrain() const;
	void compareTo(Dog const & other_dog) const;
};
