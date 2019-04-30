#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
	;
}

std::string Human::identify(void) const {
	return brain.identify();
}

const Brain& Human::getBrain(void) const {
	return brain;
}
