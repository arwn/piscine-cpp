/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             */
/*   Updated: 2019/05/01 17:00:31 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

std::mt19937	ClapTrap::mt_rand(time(0));

ClapTrap::ClapTrap(std::string s) :
	_health(0), _maxHealth(0), _energy(0), _maxEnergy(0),
	_level(0), _name(s), _meleeAttackDamage(0), _rangedAttackDamage(0),
	_armorDamageReduction(0) {
	std::cout << "constructing-clap " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(void) :
	_health(0), _maxHealth(0), _energy(0), _maxEnergy(0),
	_level(0), _name(std::string("defaultey boyo")), _meleeAttackDamage(0), _rangedAttackDamage(0),
	_armorDamageReduction(0) {
	std::cout << "constructing-clap " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp) {*this = cp;}
ClapTrap& ClapTrap::operator=(ClapTrap const &ah) {
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

ClapTrap::~ClapTrap(void)
{
	std::cout << this->getName() << " deconstructed" << std::endl;
}

// funs
void ClapTrap::meleeAttack(std::string const &target) const {
	std::cout << this->getName() << " melees " << target << " for "
		<< this->getMeleeAttackDamage() << " damage" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target) const {
	std::cout << this->getName() << " ranges " << target << " for "
		<< this->getRangedAttackDamage() << " damage" << std::endl;
}

unsigned int ClapTrap::takeDamage(unsigned int amount) {
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

unsigned int ClapTrap::beRepaired(unsigned int amount) {
	if (this->_health + amount >= this->_maxHealth) {
		this->_health = this->getMaxHealth();
	} else {
		this->_health = this->_health + amount;
	}
	std::cout << _name << " heals " << amount <<  std::endl;
	return this->_health;
}

// getters
const std::string &ClapTrap::getName( void ) const {
	return (this->_name);
}

int ClapTrap::getHealth( void ) const {
	return (this->_health);
}

int ClapTrap::getMaxHealth( void ) const {
	return (this->_maxHealth);
}

int ClapTrap::getEnergy( void ) const {
	return (this->_energy);
}

int ClapTrap::getMaxEnergy( void ) const {
	return (this->_maxEnergy);
}

int ClapTrap::getLevel( void ) const {
	return (this->_level);
}

int ClapTrap::getMeleeAttackDamage( void ) const {
	return (this->_meleeAttackDamage);
}

int ClapTrap::getRangedAttackDamage( void ) const {
	return (this->_rangedAttackDamage);
}

int ClapTrap::getArmor( void ) const {
	return (this->_armorDamageReduction);
}
