#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = name;
	this->energyPoint = 100;
	this->hitPoint = 100;
	this->attackDamage = 30;
	std::cout<<"FragTrap Default constructor called\n";
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->energyPoint = 100;
	this->hitPoint = 100;
	this->attackDamage = 30;
	std::cout<<name<<" FragTrap constructor called\n";
}
FragTrap::FragTrap(const FragTrap &cpy)
{
	this->name = cpy.name;
	this->hitPoint = cpy.hitPoint;
	this->energyPoint = cpy.energyPoint;
	this->attackDamage = cpy.attackDamage;
	std::cout << "FragTrap copy constructor called; " <<name<<std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if(hitPoint > 0 && energyPoint > 0)
	{
		energyPoint--;
		std::cout<<"FragTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attackDamage<<" points of damage!\n";
	}
		else if(energyPoint == 0)
			std::cout << "FragTrap " << name << "couldn't do anything because he/she/it didn't have any energy points left.\n";
		else
			std::cout << "FragTrap " << name << "couldn't do anything because he/she/it didn't have any energy points left.\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	if(hitPoint > amount)
	{
		hitPoint -= amount;
		std::cout<<"FragTrap---"<<name<<" took "<<amount<<" damage. from that beast.(he/she/it got "<<hitPoint<<"hit points left)\n";
	}
	else if(hitPoint > 0)
	{
		hitPoint = 0;
		std::cout<<"FragTrap---"<< name << " just took a " <<amount<<" damage and dead.(what a monster right?)("<<hitPoint<< " hit points left)"<<std::endl;
	}
	else
		std::cout<<"FragTrap---"<<name<<" is dead. Have you no respect for deads? Jeez."<<std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if(energyPoint > 0 && hitPoint > 0)
	{
		hitPoint = hitPoint + amount;
		energyPoint--;
		std::cout<<"FragTrap " <<name<< " regenared his/her " <<amount<< " health.(New hit points "<<hitPoint<<" and "<<energyPoint<<" energy points left)\n";
	}
	else if(hitPoint > 0)
		std::cout<<"FragTrap "<<name<<" didn't regenared himself/herself because he/she/it didn't have any hit points\n";
	else
		std::cout<<"FragTrap "<<name<<" didn't regenared himself/herself/itself because he/she/it didn't have any hit points\n";
}

void FragTrap::highFivesGuys(void){
 std::cout << "       ⠘ ⣷⣤⡀    ⣰⣿⡄      ⣀⡀    \n";
 std::cout<<"           ⢿⣿⣿⣦⡀⢀⣼⣿⣿⣧  ⢀⣠⣶⣿⡿     \n";
  std::cout <<" ⣀      ⢸⣿⣿⣿⣿⣾⣿⣿⣿⣿⣦⣾⣿⣿⣿⣿⠃    \n";
  std::cout <<" ⠈⠻⣿⣿⣶⣶⣶⣬⣿⣿⣿ ⢸⣿⣿⡏ ⣸⣿⣿⣿⣿⡏      \n";
  std::cout <<"   ⠈⢿⣿⣿⣿⣿⣿⣿⣿ ⢸⣿⡿ ⢰⣿⣿⠟⠉⣿⣿⣷⣶⣶⡶  \n";
  std::cout <<"     ⠙⢿⣿⣿⣿⣿⣿ ⠸⣿⠁⢀⣿⡿⠃⢠⣾⣿⣿⣿⣿⡟⠁  \n";
  std::cout <<"    ⢀⣤⣾⣷⡀⠈⠻⣇    ⠘⠟⠁⣴⣿⡿⠟⢿⣿⠏    \n";
  std::cout <<"  ⢀⣴⣿⣿⣿⣿⣿⣆ ⠉       ⠛⠋⣀⣴⣾⣿⣆    \n";
  std::cout <<"  ⠙⠛⠛⠿⠿⣿⣿⣿⡄        ⣠⣾⣿⣿⣿⣿⣿⣷⡀  \n";
  std::cout <<"       ⣰⣿⣿⣷      ⣠⣾⣿⣿⠛⠛⠛⠛⠻⠿⠿⠦ \n";
  std::cout <<"      ⢠⣿⣿⣿⠇     ⣾⣿⣿⣿⣿         \n";
  std::cout <<"      ⠛⠛⠉⠉     ⢸⡿⠛⢿⣿⣿         \n";
  std::cout <<"               ⡞⠁  ⠙⢿         \n";
}

FragTrap::~FragTrap(){
	std::cout<<"FragTrap - Default destructor called\n";
}

