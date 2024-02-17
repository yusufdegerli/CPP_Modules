#pragma once
#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat &cpy);
		WrongCat & operator=(WrongCat const & opr);
		std::string getType() const;
		void makeSound() const;

};
