#include "scalar.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout<<"Wrong Arguments!\n";
		return EXIT_FAILURE;
	}
	ScalarConverter::var_init();
	ScalarConverter::Convert(av[1]);
	return EXIT_SUCCESS;
}
