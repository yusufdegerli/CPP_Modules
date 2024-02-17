#pragma once
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string const name;
		AMateria *material[4];
	public:
		Character(std::string name);
		Character(Character const & copy);
		~Character();
		Character & operator=(Character const & arg);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
};
