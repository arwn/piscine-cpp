#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
  public:
	void attack(void);
	HumanB(std::string n);
	void setWeapon(Weapon &w);
  private:
	Weapon *weapon;
	std::string name;
};

#endif
