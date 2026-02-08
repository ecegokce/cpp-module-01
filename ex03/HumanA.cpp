#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{ }

HumanA::~HumanA(void)
{
	std::cout << "-Destructor of HumanA-" << std::endl;
}

void	HumanA::attack(void)
{
	std::string	weapon;

	weapon = this->weapon.getType();
	std::cout << name << " attacks with their " << weapon << std::endl;
}
