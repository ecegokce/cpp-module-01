#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	rcZombie(name);

	rcZombie.announce();
}