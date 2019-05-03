#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
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

	std::cout << std::endl << "----==== NinjaTrap ====----" << std::endl;
	NinjaTrap q = NinjaTrap("Edgy boyo");
	NinjaTrap n = q;
	n.takeDamage(1);
	n.takeDamage(10);
	n.takeDamage(100);
	n.takeDamage(20);
	n.beRepaired(10);
	n.takeDamage(10);
	n.ninjaShoebox(n);
	n.ninjaShoebox(aa);
	n.ninjaShoebox(a);

	std::cout << std::endl << "----==== SuperTrap ====----" << std::endl;
	SuperTrap ss = SuperTrap("MAN BOY");
	SuperTrap s = ss;
	std::cout <<
		"name " << n.getName() << " " << std::endl <<
		"health " << n.getHealth() << " " << std::endl <<
		"maxhealth " << n.getMaxHealth() << " " << std::endl <<
		"energy " << n.getEnergy() << " " << std::endl <<
		"maxenergy " << n.getMaxEnergy() << " " << std::endl <<
		"meleeattack " << n.getMeleeAttackDamage() << " " << std::endl <<
		"rangedattack " << n.getRangedAttackDamage() << " " << std::endl <<
		"armor " << n.getArmor() << " " << std::endl;
}
