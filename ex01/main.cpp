#include "Zombie.hpp"
#include <cstdlib>

int	main(void)
{
	Zombie		*z;
	std::string	str_arg;
	int			int_arg;
	int			i;

	i = 0;
	std::cout << "Enter n: ";
	getline(std::cin, str_arg);
	std::cout << "" << std::endl;
	while (str_arg[i])
	{
		if (!('0' <= str_arg[i] && str_arg[i] <= '9') && str_arg[i] != '+')
		{
			if (str_arg[i] == '-')
			{
				std::cout << "Enter only positive numbers" << std::endl;
				return (1);
			}
			std::cout << "Enter only numbers" << std::endl;
			return (1);
		}
		i++;
	}
	int_arg = atoi(str_arg.c_str());
	z = zombieHorde(int_arg, "Zombie");
	i = 0;
	while (i < int_arg)
	{
		z[i].announce();
		i++;
	}
	std::cout << "\n";
	std::cout << "Beginning of Destructor:" << std::endl;
	delete[] z;
	return (0);
}
