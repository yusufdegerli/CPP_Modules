#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & opr);
		void learnMateria(AMateria *var);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria *(material[4]);
};
