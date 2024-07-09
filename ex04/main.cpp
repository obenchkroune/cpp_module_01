#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "invalid number of arguments.\n";
		return (1);
	}
	Sed sed(av[1], av[2], av[3]);
	return (0);
}
