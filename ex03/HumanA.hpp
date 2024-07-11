#ifndef __HUMAN_A_HPP__
#define __HUMAN_A_HPP__

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
		std::string _name;
		Weapon		&_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};

#endif
