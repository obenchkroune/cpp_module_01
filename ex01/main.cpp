#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(10, "OK");
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << ": ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
