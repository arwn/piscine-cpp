#include "FragTrap.hpp"
#include <string>
#include <iostream>

int main(void) {
	// fix copy constructor
	FragTrap b = FragTrap("Zach");
	FragTrap a = b;

	a.takeDamage(1);
	a.takeDamage(10);
	a.takeDamage(100);
	a.takeDamage(20);
	a.beRepaired(10);
	a.takeDamage(10);
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
	a.vaulthunter_dot_exe("Potato");
}
