#include <string>
#include <iostream>
#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "melee " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "range " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
	std::cout << "shout " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
	std::string huh[3] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	void(Human::*verb[3])(const std::string&) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	for (int i = 0; i < 3; i++) {
		if (action_name == huh[i]) {
			(this->*verb[i])(target);
			return;
		}
	}
	std::cerr << "OHUTHF*(#GC FDPCGDUGC<D";
}
