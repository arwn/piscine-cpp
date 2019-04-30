#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void) {
	ZombieEvent zb;
	zb.setZombieType("horse");
	Zombie *z;
	z = zb.randomChump();
	delete z;
}
