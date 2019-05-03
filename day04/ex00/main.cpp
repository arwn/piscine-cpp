#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

#include <string>
#include <iostream>

int main(void) {
	Sorcerer s("Tim", "The Enchanter");
	Victim v("Steve");
	Peon p("Joe");

	std::cout << s << std::endl << v << std::endl << p << std::endl;
	s.polymorph(v);
}
