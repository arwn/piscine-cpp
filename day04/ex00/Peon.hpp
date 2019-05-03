#ifndef Peon_HPP
#define Peon_HPP

#include "Victim.hpp"

#include <string>
#include <ostream>

class Peon : public Victim {
  private:

	std::string _name;

  public:
	Peon(void);
	Peon(std::string name);
	Peon(Peon const & cp);
	Peon& operator=(const Peon &ah);
	~Peon(void);

	void getPolymorphed(void) const;

	std::string getName(void) const;
};

#endif // !Peon_HPP
