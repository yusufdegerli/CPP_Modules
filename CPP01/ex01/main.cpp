#include "Zombie.hpp"

int main(){
	Zombie *list = zombieHorde(20, "Yusuf");

	for (int i = 0; i < 20; i++)
		list[i].announce();
	delete []list;
	return 0;
}
