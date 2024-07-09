#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

void HumanB::attack(void)
{
	if (!_weapon)
		return ;
	std::cout << _name << " attacks with their " << _weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
