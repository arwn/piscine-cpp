#include "Zombie.hpp"
#include <iostream>
#include <string>

void Zombie::setName(std::string n) {
	name = n;
}

void Zombie::setType(std::string t) {
	type = t;
}

void Zombie::announce(void) {
	std::cout << "<" << name  << " ("
		<< type << ")> "
		<< "Braiiiiiiinnnsssss..." << std::endl;
}
