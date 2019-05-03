#include "Peon.hpp"
#include "Victim.hpp"

#include <string>
#include <ostream>
#include <iostream>

Peon::Peon(std::string namae) : Victim(namae) {
	std::cout << "zog zog" << std::endl;
}

Peon::Peon(const Peon &cp) : Victim(cp) {*this = cp;}

Peon& Peon::operator=(Peon const &ah) {
	_name = ah.getName();
	return *this;
}

Peon::~Peon(void) {
	std::cout << "Bleuark.." << std::endl;
}

// getters
std::string Peon::getName(void) const {
	return _name;
}
