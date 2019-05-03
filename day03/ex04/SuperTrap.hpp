#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>

class SuperTrap: public FragTrap, public ScavTrap {
  public:
	SuperTrap(std::string);
	SuperTrap(void);
	~SuperTrap(void);
	SuperTrap& operator=(const SuperTrap &ah);
};

#endif // !SUPERTRAP
