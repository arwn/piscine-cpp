#ifndef FRAGTAG_HPP
#define FRAGTAG_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>
#include <random>

class FragTrap: public ClapTrap {
  public:
	FragTrap(std::string);
	FragTrap(void);
	~FragTrap(void);
	FragTrap& operator=(const FragTrap &ah);

	void vaulthunter_dot_exe(std::string const &target);

  private:
	static std::string _verbs[8];
};

#endif
