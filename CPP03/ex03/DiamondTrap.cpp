#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name")
{
	std::cout<<"Default DiamondTrap Constructor called\n";
	this->name = "default";
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), FragTrap(cpy), ScavTrap(cpy)
{
	*this = cpy;
	std::cout<<"DiamondTrap Copy Constructor called -> "<<name<<std::endl;
}
void DiamondTrap::whoAmI(void)
{
	std::cout<<"Hi!.. My name is, my name is... My name is... Chicka chicka slim...\n";
	std::cout<<"I'm just kidding my name is "<<this->name<<std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout<<"DiamondTrap assignment operator called\n";
	this->name = src.name + "_clap_trap";
	this->hitPoint = src.hitPoint;
	this->energyPoint = src.energyPoint;
	this->attackDamage = src.attackDamage;
	return *this;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap("string_constructor_name")
{
	std::cout<<"DiamondTrap Constructor called\n";
	this->name = name + "_default";
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::~DiamondTrap(){
	std::cout<<"DiamondTrap Destructor called\n";}


