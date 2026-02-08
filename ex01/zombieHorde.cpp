#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde = new Zombie[N];
	int	i;

	i = 0;
	while (i < N)
	{
		zombieHorde[i].setName(name, i);
		i++;
	}
	return (zombieHorde);
}
