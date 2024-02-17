#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
	private:
		bool guardingGate;
	public:
	ScavTrap();
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap &cpy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};
