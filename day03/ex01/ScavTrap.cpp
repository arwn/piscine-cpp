/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             */
/*   Updated: 2019/05/01 15:48:31 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::mt19937	ScavTrap::mt_rand(time(0));

std::string		ScavTrap::_verbs[5] = {
	"do the shuffle",
	"eat a nice cake",
	"take a bath",
	"fishing",
	"snack on some fish"};

ScavTrap::ScavTrap(std::string s) :
	_health(100), _maxHealth(100), _energy(50), _maxEnergy(50),
	_level(1), _name(s), _meleeAttackDamage(20), _rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << "constructing-scav " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(void) :
	_health(100), _maxHealth(100), _energy(50), _maxEnergy(50),
	_level(1), _name(std::string("defaultey boyo")), _meleeAttackDamage(20), _rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << "constructing-scav " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp) {*this = cp;}
ScavTrap& ScavTrap::operator=(ScavTrap const &ah) {
	std::cout << "assignment-scav operator called" << std::endl;
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

ScavTrap::~ScavTrap(void)
{
	std::cout << this->getName() << " deconstructed-scav" << std::endl;
}

// funs
void ScavTrap::meleeAttack(std::string const &target) const {
	std::cout << this->getName() << " melees " << target << " for "
		<< this->getMeleeAttackDamage() << " damage" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target) const {
	std::cout << this->getName() << " ranges " << target << " for "
		<< this->getRangedAttackDamage() << " damage" << std::endl;
}

unsigned int ScavTrap::takeDamage(unsigned int amount) {
	int d = static_cast<int>(amount);
	int rd = d - _armorDamageReduction;

	if (this->_health <=0) {
		std::cout << this->_name << " already dead" << std::endl;
		return 0;
	}
	if (rd < 0) {
		rd = 0;
	}
	if (this->getHealth() - rd < 0) {
		return takeDamage(d - 1);
	}
	std::cout << this->getName() << " took " << rd << " damage" << std::endl;
	this->_health -= rd;
	return this->_health;
}

unsigned int ScavTrap::beRepaired(unsigned int amount) {
	if (this->_health + amount >= this->_maxHealth) {
		this->_health = this->getMaxHealth();
	} else {
		this->_health = this->_health + amount;
	}
	std::cout << _name << " heals " << amount <<  std::endl;
	return this->_health;
}

void ScavTrap::challengeNewcomer(void) {
	std::cout << this->getName() << " go " << _verbs[mt_rand() % 8] << std::endl;
}

// getters
const std::string &ScavTrap::getName( void ) const {
	return (this->_name);
}

int ScavTrap::getHealth( void ) const {
	return (this->_health);
}

int ScavTrap::getMaxHealth( void ) const {
	return (this->_maxHealth);
}

int ScavTrap::getEnergy( void ) const {
	return (this->_energy);
}

int ScavTrap::getMaxEnergy( void ) const {
	return (this->_maxEnergy);
}

int ScavTrap::getLevel( void ) const {
	return (this->_level);
}

int ScavTrap::getMeleeAttackDamage( void ) const {
	return (this->_meleeAttackDamage);
}

int ScavTrap::getRangedAttackDamage( void ) const {
	return (this->_rangedAttackDamage);
}

int ScavTrap::getArmor( void ) const {
	return (this->_armorDamageReduction);
}
