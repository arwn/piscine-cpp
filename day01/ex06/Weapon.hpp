#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
  public:
	Weapon(std::string s);
	Weapon(void);
	const std::string getType(void);
	void setType(std::string t);
  private:
	std::string type;
};

#endif
