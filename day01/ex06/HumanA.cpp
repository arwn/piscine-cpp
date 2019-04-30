#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string n, Weapon &w) {
	name = n;
	weapon = &w;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
