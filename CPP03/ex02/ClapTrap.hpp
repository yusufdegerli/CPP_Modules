#pragma once
#include <iostream>

class ClapTrap
{
	protected:
	std::string name;
	unsigned int hitPoint;
	int energyPoint;
	int attackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap &cpy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
