#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <string>
#include <random>

class NinjaTrap: public ClapTrap {
  public:
	NinjaTrap(std::string);
	NinjaTrap(void);
	~NinjaTrap(void);
	NinjaTrap& operator=(const NinjaTrap &ah);

	void ninjaShoebox(const FragTrap &r);
	void ninjaShoebox(const ScavTrap &r);
	void ninjaShoebox(const NinjaTrap &r);

  private:
	static std::string _verbs[8];
};

#endif
