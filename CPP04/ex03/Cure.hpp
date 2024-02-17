#pragma once
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type;
	public:
		Cure();
		~Cure();
		Cure(Cure &cpy);
		Cure & operator=(Cure const & opr);
		Cure(std::string const & type);
		std::string const & getType() const;
		Cure* clone()const;
		void use(ICharacter & target);
};
