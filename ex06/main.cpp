#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Complain Level:\n\t\tDEBUG\n\t\tINFO\n\t\tWARNING\n\t\tERROR" << std::endl;
		std::cout << "Usage: ./harlFilter <Complain Level>" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
}
