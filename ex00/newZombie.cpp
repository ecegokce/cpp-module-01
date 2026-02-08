#include "Zombie.hpp"

Zombie	*newZombie(std::string	name)
{
	Zombie	*pZombie;

	pZombie = new Zombie(name);
	return (pZombie);
}
