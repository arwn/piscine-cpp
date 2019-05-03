/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             */
/*   Updated: 2019/05/01 17:11:50 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <random>

std::string		FragTrap::_verbs[8] = {
	"eats", "consumes", "vores", "engulfs",
	"snacks upon", "licks", "tastes", "chews"};

FragTrap::FragTrap(std::string s) {
	_health = 100;
	_maxHealth = 100;
	_energy = 100;
	_maxEnergy = 100;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "constructing-frag " << this->getName() << std::endl;
}

FragTrap::FragTrap(void) {
	_health = 100;
	_maxHealth = 100;
	_energy = 100;
	_maxEnergy = 100;
	_level = 1;
	_name = std::string("Defaultey boyo");
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "constructing-frag " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &ah) {
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

FragTrap::~FragTrap(void) {
	std::cout << "deconstructing-frag" << std::endl;
}

// funs
void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (_energy >= 25) {
		std::cout << this->getName() << " " << _verbs[mt_rand() % 8]
			<< " " << target << std::endl;
		_energy -= 25;
	} else {
		std::cout << "not enough energy" << std::endl;
	}
}
