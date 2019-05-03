#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include <random>

std::string		NinjaTrap::_verbs[8] = {
	"eats", "consumes", "vores", "engulfs",
	"snacks upon", "licks", "tastes", "chews"};

NinjaTrap::NinjaTrap(std::string s) {
	_health = 60;
	_maxHealth = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 6;
	_armorDamageReduction = 0;
	std::cout << "constructing-ninja " << this->getName() << std::endl;
}

NinjaTrap::NinjaTrap(void) {
	_health = 60;
	_maxHealth = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_name = std::string("Defaultey boyo");
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 6;
	_armorDamageReduction = 0;
	std::cout << "constructing-ninja " << this->getName() << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &ah) {
	std::cout << "assignment operator called" << std::endl;
	_name = ah.getName();
	_health = ah.getHealth();
	_maxHealth = ah.getMaxHealth();
	_energy = ah.getEnergy();
	_maxEnergy = ah.getMaxEnergy();
	_armorDamageReduction = ah.getArmor();
	_name = ah.getName();
	_level = ah.getLevel();
	return *this;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "deconstructing-frag" << std::endl;
}

// funs
void NinjaTrap::ninjaShoebox(const FragTrap &r) {
	std::cout << "throwing sand at frag " 
		<< r.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &r) {
	std::cout << "throwing sand at scav " 
		<< r.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &r) {
	std::cout << "throwing sand at ninja " 
		<< r.getName() << std::endl;
}

