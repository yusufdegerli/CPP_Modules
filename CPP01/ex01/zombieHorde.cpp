#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
	Zombie *n = new Zombie[N];
	for (int i = 0; i < N; i++)
		n[i].setName(name);
	return (n);
}
