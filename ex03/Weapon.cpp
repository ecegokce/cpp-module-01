#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): type(weapon)
{ }

Weapon::~Weapon(void)
{
	std::cout << "-Destructor of Weapon-" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string	Weapon::getType(void) const
{
	return (type);
}
