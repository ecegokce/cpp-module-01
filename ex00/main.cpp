#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	z = newZombie("ZombieInHeap");
	z->announce();
	randomChump("ZombieInStack");
	delete z;
	return (0);
}
