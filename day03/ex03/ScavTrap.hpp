#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <random>

class ScavTrap: public ClapTrap {
  public:
	ScavTrap(std::string);
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap& operator=(const ScavTrap &ah);

	void challengeNewcomer(void);

  private:
	static std::string _verbs[5];
};

#endif
