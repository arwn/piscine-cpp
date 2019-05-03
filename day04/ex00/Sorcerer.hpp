#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

#include <string>
#include <ostream>

class Sorcerer {
  private:
	Sorcerer(void);

	std::string _name;
	std::string _title;
  public:
	Sorcerer(std::string namae, std::string dae);
	Sorcerer(Sorcerer const & cp);
	Sorcerer& operator=(const Sorcerer &ah);
	~Sorcerer(void);

	void introduce(void) const;
	void polymorph(Victim const &) const;

	std::string getName(void) const;
	std::string getTitle(void) const;
};

std::ostream& operator<<(std::ostream &o, const Sorcerer& s);

#endif // !SORCERER_HPP
