#include "ClapTrap.hpp"
ClapTrap::ClapTrap():name("NULL"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout<<"Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name):name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout<<name<<" Constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &cpy): name(cpy.name), hitPoint(cpy.hitPoint), energyPoint(cpy.energyPoint), attackDamage(cpy.attackDamage){
	std::cout << "ClapTrap - Called name constructor for " << name << "." << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if(hitPoint > 0 && energyPoint > 0)
	{
		energyPoint--;
		std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<attackDamage<<" points of damage!\n";
	}
	else if(energyPoint == 0)
		std::cout << "ClapTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any energy points left.\n";
	else
		std::cout << "ClapTrap " << name << " couldn\'t do anything because he/she/it didn\'t have any hit points left.\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(hitPoint > amount)
	{
		hitPoint -= amount;
		std::cout<<name<<" took "<<amount<<" damage. from that beast.(he/she/it got "<<hitPoint<<" hit points left)\n";
	}
	else if(hitPoint > 0)
	{
		hitPoint = 0;
		std::cout << name << " just took a " <<amount<<" damage and dead.(what a monster right?)("<<hitPoint<< " hit points left)"<<std::endl;
	}
	else
		std::cout<<name<<" is dead. Have you no respect for deads? Jeez."<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energyPoint > 0 && hitPoint > 0)
	{
		hitPoint = hitPoint + amount;
		energyPoint--;
		std::cout<<"ClapTrap " <<name<< " regenared his/her " <<amount<< " health.(New hit points "<<hitPoint<<" and "<<energyPoint<<" energy points left)\n";
	}
	else if(hitPoint > 0)
		std::cout<<"ClapTrap "<<name<<" didn't regenared himself/herself because he/she/it didn't have any hit points\n";
	else
		std::cout<<"ClapTrap "<<name<<" didn't regenared himself/herself/itself because he/she/it didn't have any hit points\n";
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Default destructor\n";
}
