#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{ }

HumanB::~HumanB(void)
{
	std::cout << "-Destructor of HumanB-" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (!this->weapon)
    {
        std::cout << name << " has no weapon!" << std::endl;
        return;
    }
    
    std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
}
