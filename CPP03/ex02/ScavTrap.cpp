#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = name;
	this->guardingGate = false;
	this->energyPoint = 100;
	this->hitPoint = 100;
	this->attackDamage = 30;
	std::cout<<"ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->guardingGate = false;
	this->energyPoint = 100;
	this->hitPoint = 100;
	this->attackDamage = 30;
	std::cout<<name<<" ScavTrap constructor called\n";
}
ScavTrap::ScavTrap(ScavTrap &cpy)
{
	this->name = cpy.name;
	this->hitPoint = cpy.hitPoint;
	this->energyPoint = cpy.energyPoint;
	this->attackDamage = cpy.attackDamage;
	this->guardingGate = false;
	std::cout << "ScavTrap copy constructor called; " <<name<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(hitPoint > 0 && energyPoint > 0)
	{
		energyPoint--;
		std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!\n";
	}
		else if(energyPoint == 0)
			std::cout << "ScavTrap " << name << "couldn't do anything because he/she/it didn't have any energy points left.\n";
		else
			std::cout << "ScavTrap " << name << "couldn't do anything because he/she/it didn't have any energy points left.\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if(hitPoint > amount)
	{
		hitPoint -= amount;
		std::cout<<"ScavTrap---"<<name<<" took "<<amount<<" damage. from that beast.(he/she/it got "<<hitPoint<<"hit points left)\n";
	}
	else if(hitPoint > 0)
	{
		hitPoint = 0;
		std::cout<<"ScavTrap---"<< name << " just took a " <<amount<<" damage and dead.(what a monster right?)("<<hitPoint<< " hit points left)"<<std::endl;
	}
	else
		std::cout<<"ScavTrap---"<<name<<" is dead. Have you no respect for deads? Jeez."<<std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if(energyPoint > 0 && hitPoint > 0)
	{
		hitPoint = hitPoint + amount;
		energyPoint--;
		std::cout<<"ScavTrap " <<name<< " regenared his/her " <<amount<< " health.(New hit points "<<hitPoint<<" and "<<energyPoint<<" energy points left)\n";
	}
	else if(hitPoint > 0)
		std::cout<<"ScavTrap "<<name<<" didn't regenared himself/herself because he/she/it didn't have any hit points\n";
	else
		std::cout<<"ScavTrap "<<name<<" didn't regenared himself/herself/itself because he/she/it didn't have any hit points\n";
}

void ScavTrap::guardGate()
{
	if(guardingGate == false)
	{
		guardingGate = true;
		std::cout<<"ScavTrap " <<name<<" is now guarding the gate\n";
	}
	else
		std::cout<<"ScavTrap "<<name<<" is already guarding the gate\n";
}

ScavTrap::~ScavTrap(){
	std::cout<<"ScavTrap Default destructor called\n";
}
