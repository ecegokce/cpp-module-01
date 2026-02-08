#include "Zombie.hpp"
#include <sstream>

Zombie::Zombie(): name("") 
{ }

Zombie::~Zombie(void)
{
	std::cout << name << ": is destroyed" << std::endl;
}

void	Zombie::setName(std::string argName, int i)
{
	std::stringstream	str_i;

	str_i << i;
	name = argName + str_i.str();
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
