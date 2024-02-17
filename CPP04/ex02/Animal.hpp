#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal() = 0;
		Animal(Animal & cpy);
		Animal & operator=(Animal const & arg);
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};
