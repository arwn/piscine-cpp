#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iomanip>

Brain::Brain(void) {
	girth = 0;
	volume = 0;
}

std::string Brain::identify(void) const {
	std::stringstream s;
	s << "0x" << std::hex << this;
	return s.str();
}
