#pragma once
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();
		void whoAmI(void);
		void attack(const std::string& target);
		DiamondTrap &operator=(const DiamondTrap &src);
		DiamondTrap(const DiamondTrap &cpy);
};
