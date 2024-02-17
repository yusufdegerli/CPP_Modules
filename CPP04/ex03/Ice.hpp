#pragma once
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type;
	public:
		Ice();
		~Ice();
		Ice(Ice &cpy);
		Ice & operator=(Ice const & opr);
		Ice(std::string const & type);
		std::string const & getType() const;
		Ice* clone()const;
};
