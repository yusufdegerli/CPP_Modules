#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain *brain;
	std::string type;

	public:
	Cat();
	~Cat();
	Cat(Cat &cpy);
	Cat & operator=(Cat const & opr);
	std::string getType() const;
	void makeSound() const;
	Brain *getBrain()const;
	void compareTo(Cat const & other_cat) const;
};
