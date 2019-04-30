#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
  public:
	void announce(void);
	void setName(std::string name);
	void setType(std::string type);
  private:
	std::string type;
	std::string name;
};

#endif
