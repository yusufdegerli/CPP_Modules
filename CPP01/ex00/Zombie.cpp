#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout<<"Constructor zombie called"<<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout<<"Destructor zombie called"<<std::endl;
}

void Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
