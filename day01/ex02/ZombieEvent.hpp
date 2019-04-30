#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent {
  private:
	std::string zamboType;
  public:
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump(void);
};

#endif
