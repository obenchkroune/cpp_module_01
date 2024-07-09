#ifndef __HUMAN_B_HPP__
#define __HUMAN_B_HPP__

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon		*_weapon;

	public:
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
		void attack(void);
};

#endif
