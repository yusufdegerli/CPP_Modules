#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string tmp = "";
	if(ac == 1)
		std::cout << " LOUD AND UNBEARABLE FEEDBACK NOISE" <<std::endl;
	else if(ac > 1)
	{
		for (int i = 1; i < ac; i++)
			tmp += av[i];
		for (size_t i = 0; i < tmp.length(); i++)
			std::cout << (char) std::toupper(tmp[i]);
		std::cout << std::endl;
	}
	return (0);
}
