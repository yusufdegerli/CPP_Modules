#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & cpy);
		virtual ~WrongAnimal();
		void makeSound() const;
		WrongAnimal &operator=(const WrongAnimal &other);
		std::string getType() const;
};
