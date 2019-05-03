/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             */
/*   Updated: 2019/05/01 17:12:00 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

std::string		ScavTrap::_verbs[5] = {
	"do the shuffle",
	"eat a nice cake",
	"take a bath",
	"fishing",
	"snack on some fish"};

ScavTrap::ScavTrap(std::string s) {
	_health = 100;
	_maxHealth = 100;
	_energy = 50;
	_maxEnergy = 50;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "constructing-scav " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(void) {
	_health = 100;
	_maxHealth = 100;
	_energy = 50;
	_maxEnergy = 50;
	_level = 1;
	_name = std::string("defaultey boyo");
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "constructing-scav " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &ah) {
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

ScavTrap::~ScavTrap(void) {
	std::cout << "deconstructing-scav" << std::endl;
}

// funs
void ScavTrap::challengeNewcomer(void) {
	std::cout << this->getName() << " go " << _verbs[mt_rand() % 5] << std::endl;
}
