#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void func(void) {
	ZombieHorde h = ZombieHorde(8);
	h.announce();
}

int main(void) {
	func();
}
