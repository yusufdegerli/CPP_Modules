#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound() const;
		Animal(Animal & cpy);
		Animal &operator=(const Animal &other);
		std::string getType() const;
};
