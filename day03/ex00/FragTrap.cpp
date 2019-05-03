/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             */
/*   Updated: 2019/05/01 15:36:52 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::mt19937	FragTrap::mt_rand(time(0));

std::string		FragTrap::_verbs[8] = {
	"eats", "consumes", "vores", "engulfs",
	"snacks upon", "licks", "tastes", "chews"};

FragTrap::FragTrap(std::string s) :
	_health(100), _maxHealth(100), _energy(100), _maxEnergy(100),
	_level(1), _name(s), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "constructing " << this->getName() << std::endl;
}

FragTrap::FragTrap(void) :
	_health(100), _maxHealth(100), _energy(100), _maxEnergy(100),
	_level(1), _name(std::string("defaultey boyo")), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "constructing " << this->getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap &cp) {*this = cp;}
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

FragTrap::~FragTrap(void)
{
	std::cout << this->getName() << " deconstructed" << std::endl;
}

// funs
void FragTrap::meleeAttack(std::string const &target) const {
	std::cout << this->getName() << " melees " << target << " for "
		<< this->getMeleeAttackDamage() << " damage" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target) const {
	std::cout << this->getName() << " ranges " << target << " for "
		<< this->getRangedAttackDamage() << " damage" << std::endl;
}

unsigned int FragTrap::takeDamage(unsigned int amount) {
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

unsigned int FragTrap::beRepaired(unsigned int amount) {
	if (this->_health + amount >= this->_maxHealth) {
		this->_health = this->getMaxHealth();
	} else {
		this->_health = this->_health + amount;
	}
	std::cout << _name << " heals " << amount <<  std::endl;
	return this->_health;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (_energy >= 25) {
		std::cout << this->getName() << " " << _verbs[mt_rand() % 8]
			<< " " << target << std::endl;
		_energy -= 25;
	} else {
		std::cout << "not enough energy" << std::endl;
	}
}

// getters
const std::string &FragTrap::getName( void ) const {
	return (this->_name);
}

int FragTrap::getHealth( void ) const {
	return (this->_health);
}

int FragTrap::getMaxHealth( void ) const {
	return (this->_maxHealth);
}

int FragTrap::getEnergy( void ) const {
	return (this->_energy);
}

int FragTrap::getMaxEnergy( void ) const {
	return (this->_maxEnergy);
}

int FragTrap::getLevel( void ) const {
	return (this->_level);
}

int FragTrap::getMeleeAttackDamage( void ) const {
	return (this->_meleeAttackDamage);
}

int FragTrap::getRangedAttackDamage( void ) const {
	return (this->_rangedAttackDamage);
}

int FragTrap::getArmor( void ) const {
	return (this->_armorDamageReduction);
}
