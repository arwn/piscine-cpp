#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human {
  public:
	Human(void);
	std::string identify(void) const;
	const Brain& getBrain(void) const;
  private:
	const Brain brain;
};

#endif
