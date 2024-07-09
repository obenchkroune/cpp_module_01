#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = newZombie("Zombie in the Heap");
	zombie1->announce();
	randomChump("Zombie in the Stack");
	delete zombie1;
	return (0);
}
