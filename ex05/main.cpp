#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	arg;
	
	std::cout << "Write complain level: 'DEBUG' / 'INFO' / 'WARNING' / 'ERROR'" << std::endl;
	std::cout << "Write Exit when you want to leave" << std::endl;
	std::cout << "Enter: ";
	while (1)
	{
		getline(std::cin, arg);
		if ((arg == "DEBUG") || (arg == "INFO") || (arg == "WARNING") || (arg == "ERROR"))
			harl.complain(arg);
		if (arg == "EXIT")
		{
			std::cout << std::endl;
			break;
		}
		std::cout << std::endl;
		std::cout << "Write complain level: 'DEBUG' / 'INFO' / 'WARNING' / 'ERROR'" << std::endl;
		std::cout << "Write Exit when you want to leave" << std::endl;
		std::cout << "Enter: ";
	}
	return (0);
}
