#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main(void) {
		std::cout << "----==== FragTrap ====----" << std::endl;
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
	std::cout << std::endl << "----==== ScavTrap ====----" << std::endl;
	ScavTrap bb = ScavTrap("Potatoboy");
	ScavTrap aa = bb;

	aa.takeDamage(1);
	aa.takeDamage(10);
	aa.takeDamage(100);
	aa.takeDamage(20);
	aa.beRepaired(10);
	aa.takeDamage(10);
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
	aa.challengeNewcomer();
}
