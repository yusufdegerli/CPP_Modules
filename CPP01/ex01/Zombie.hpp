#pragma once
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void		setName(std::string name);
		std::string	getName() const;
		void		announce() const;
};

Zombie *zombieHorde(int N, std::string name);
