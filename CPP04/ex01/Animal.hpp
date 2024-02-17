#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal & cpy);
		virtual ~Animal();
		Animal & operator=(Animal const & arg);
		virtual std::string getType()const;
		virtual void makeSound() const;
};
