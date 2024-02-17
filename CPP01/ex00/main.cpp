#include "Zombie.hpp"

int main(void)
{
	Zombie *zmb = newZombie("ahmet");
	zmb->announce();
	zmb->randomChump("mehmet");
	return 0;
}

