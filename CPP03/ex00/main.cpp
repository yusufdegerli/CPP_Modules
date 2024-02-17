#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap yusuf("yusuf");
	yusuf.attack("KRAKEN");
	yusuf.takeDamage(2000);
	yusuf.takeDamage(2000);
	yusuf.beRepaired(10);

	ClapTrap bos;
	bos.attack("GODZILLA");
	bos.beRepaired(100);
	bos.takeDamage(99);
	bos.beRepaired(150);
	bos.takeDamage(9999);
	bos.takeDamage(9999);

	return 0;
}
