#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main()
{
	// std::cout << "\033[32mClapTrap TESTS\033[30m" << std::endl;
	// {
	// 	ClapTrap a;
	// 	ClapTrap b("Cody");

	// 	a.attack("some other robot");
	// 	a.takeDamage(10);
	// 	a.takeDamage(10);
	// 	a.beRepaired(5);
	// 	a.attack("some other other robot");
	// 	b.beRepaired(3);
	// 	for (int i = 0; i < 12; i++)
	// 		b.attack("Cody-clone");
	// 	b.beRepaired(3);
	// }
	// std::cout << "\033[31mEND OF ClapTrap\033[0m" << std::endl;
	// std::cout << "\033[33mScavTrap TESTS\033[37m" << std::endl;
	// {
	// 	ScavTrap c;
	// 	ScavTrap d("Savage");

	// 	c.attack("KRAKEN");
	// 	//for (int i = 0; i < 50; i++)
	// 	//	c.attack("KRAKEN");
	// 	c.beRepaired(22);
	// 	c.takeDamage(21);
	// 	c.beRepaired(22);
	// 	c.guardGate();
	// 	c.guardGate();
	// 	d.attack("GIANT HUMAN");
	// 	d.takeDamage(101);
	// 	d.takeDamage(15);
	// 	d.attack("GIANT HUMAN");
	// }
	// std::cout << "\033[31mEND OF ScavTrap\033[0m" << std::endl;
	// std::cout << "\033[34mFragTrap TESTS\033[36m" << std::endl;
	// {
	// 	FragTrap c;
	// 	FragTrap d("Savage");

	// 	c.attack("KRAKEN");
	// 	//for (int i = 0; i < 50; i++)
	// 	//	c.attack("KRAKEN");
	// 	c.beRepaired(22);
	// 	c.takeDamage(21);
	// 	c.beRepaired(22);
	// 	c.highFivesGuys();
	// 	c.highFivesGuys();
	// 	d.attack("GIANT HUMAN");
	// 	d.takeDamage(101);
	// 	d.takeDamage(15);
	// 	d.attack("GIANT HUMAN");
	// 	c.highFivesGuys();
	// }
	// std::cout << "\033[31mEND OF FragTrap\033[0m" << std::endl;
    std::cout << "\033[34mDiamondTrap TESTS\033[36m" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	std::cout << "\033[31mEND OF DiamondTrap\033[0m" << std::endl;
	return (0);
}
