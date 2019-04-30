#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string s) {
	type = s;
}

Weapon::Weapon(void) {
	;
}

const std::string Weapon::getType(void) {
	return type;
}

void Weapon::setType(std::string t) {
	type = t;
}
