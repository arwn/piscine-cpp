#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
  public:
	void attack(void);
	HumanA(std::string n, Weapon &w);
  private:
	Weapon *weapon;
	std::string name;
};

#endif
