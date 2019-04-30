#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde {
  public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	void announce(void);
  private:
	Zombie *horde;
	int size;
};

#endif
