#include "Victim.hpp"

#include <string>
#include <ostream>
#include <iostream>


Victim::Victim(std::string namae) {
	_name = namae;
	std::cout << "some random victim called "
		<< _name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &cp) {*this = cp;}
Victim& Victim::operator=(Victim const &ah) {
	_name = ah.getName();
	return *this;
}

Victim::~Victim(void) {
	std::cout << "victim " << _name << " just died for no apparent reason" << std::endl;
}

// funcs
std::ostream& operator<<(std::ostream &o, const Victim& p) {
	o << "I'm " << p.getName() << " and I like otters !";
	return o;
}

void Victim::getPolymorphed(void) const {
	std::cout << _name << " hase been turned into a cute little sheep" << std::endl;
}

// getters
std::string Victim::getName(void) const {
	return _name;
}
