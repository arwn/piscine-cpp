#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

void ZombieEvent::setZombieType(std::string type) {
	zamboType = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
	Zombie *z = new Zombie;
	z->setName(name);
	z->setType(zamboType);
	return z;
}

Zombie *ZombieEvent::randomChump(void) {
	std::srand(std::time(nullptr)); // initialize rand

	std::string alphabet[] = {"brian", "breen", "bran", "bleh"};
	int namelen = (std::rand() % 10) + 1;
	std::string name = "";

	name = alphabet[std::rand() % 4];

	Zombie *z = newZombie(name);
	z->announce();
	return z;
}
