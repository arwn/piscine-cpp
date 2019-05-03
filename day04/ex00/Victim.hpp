#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <ostream>

class Victim {
private:
	std::string _name;

public:
	Victim(void);
	Victim(std::string name);
	Victim(Victim const & cp);
	Victim& operator=(const Victim &ah);
	~Victim();

	void getPolymorphed(void) const;

	std::string getName(void) const;
};

std::ostream& operator<<(std::ostream &o, const Victim& p);


#endif // !VICTIM_HPP
