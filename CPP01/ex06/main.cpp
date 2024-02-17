#include "Harl.hpp"

int main(int ac, char **av)
{
	int i = 0;
	Harl harold;
	std::string commands[4] =
	{
		"DEBUG",
		"ERROR",
		"INFO",
		"WARNING"
	};
	switch (ac)
	{
	case 2:
		break;
	default:
		return 1;
	}
	for(i = 0; (i < 4 && std::string(av[1]).compare(commands[i])); i++)
	;
    switch (i)
    {
        case 0:
            harold.complain("DEBUG");
        case 1:
            harold.complain("ERROR");
        case 2:
            harold.complain("INFO");
        case 3:
            harold.complain("WARNING");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return (0);
}
