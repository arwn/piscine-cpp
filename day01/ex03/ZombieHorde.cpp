#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n) {
	horde = new Zombie[n];
	size = n;

	for (int i = 0; i < n; i++) {
		horde[i].setName("random name");
		horde[i].setType("horse");
	}
}

ZombieHorde::~ZombieHorde() {
	std::cout << "THE HORDE HAS BEEN RELEASED" << std::endl;
	delete[] horde;
}

void ZombieHorde::announce() {
	for (int i = 0; i < size; i++) {
		horde[i].announce();
	}
}
