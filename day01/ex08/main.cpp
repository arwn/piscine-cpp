#include "Human.hpp"

int main(void) {
	Human h;
	std::string huh[3] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	std::string uhu[3] = {
		"pebsi",
		"gola",
		"mikk"
	};
	for (int i = 0; i < 3; i++) {
		h.action(huh[i], uhu[i]);
	}
}
