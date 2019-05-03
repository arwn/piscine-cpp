#include "Sorcerer.hpp"
#include "Victim.hpp"

#include <string>
#include <iostream>

// constructors
Sorcerer::Sorcerer(std::string namae, std::string dae) {
	_name = namae;
	_title = dae;
	std::cout << _name << ", " << _title << " is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cp) {*this = cp;}
Sorcerer& Sorcerer::operator=(Sorcerer const &ah) {
	_name = ah.getName();
	_title = ah.getTitle();
	return *this;
}

Sorcerer::~Sorcerer(void) {
	std::cout << _name << ", "
		<< _title << ", is dead. Consequences will never be the same !" << std::endl;
}

// ostream shit
std::ostream& operator<<(std::ostream &o, const Sorcerer& s) {
	o << "They call me.. " << s.getName();
	return o;
}

// funcs
void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
}

// getters
std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_name;
}

