#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <random>

SuperTrap::SuperTrap(std::string s) {
	_health = FragTrap::getHealth();
	_maxHealth = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 6;
	_armorDamageReduction = 0;
	std::cout << "constructing-super " << this->getName() << std::endl;
}

SuperTrap::SuperTrap(void) {
	_health = 60;
	_maxHealth = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_name = std::string("Defaultey boyo");
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 6;
	_armorDamageReduction = 0;
	std::cout << "constructing-super " << this->getName() << std::endl;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &ah) {
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

SuperTrap::~SuperTrap(void) {
	std::cout << "deconstructing-ninja" << std::endl;
}

