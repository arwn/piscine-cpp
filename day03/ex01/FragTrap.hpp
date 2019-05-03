/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awindham <awindham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 08:40:02 by acarlson          #+#    #+#             */
/*   Updated: 2019/05/01 15:34:35 by awindham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAG_HPP
#define FRAGTAG_HPP

#include <iostream>
#include <string>
#include <random>

#define MAX(a,b) (a > b ? a : b)
#define MIN(a,b) (a < b ? a : b)

class FragTrap {
  public:
	FragTrap(std::string);
	FragTrap(void);
	FragTrap(FragTrap const & cp);
	~FragTrap(void);
	FragTrap& operator=(const FragTrap &ah);

	void meleeAttack(std::string const &target) const;
	void rangedAttack(std::string const &target) const;
	unsigned int takeDamage(unsigned int amount);
	unsigned int beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);

	const std::string &getName(void) const;
	int getHealth(void) const;
	int getMaxHealth(void) const;
	int getEnergy(void) const;
	int getMaxEnergy(void) const;
	int getLevel(void) const;
	int getMeleeAttackDamage(void) const;
	int getRangedAttackDamage(void) const;
	int getArmor(void) const;

  private:
	unsigned int _health;
	unsigned int _maxHealth;
	unsigned int _energy;
	unsigned int _maxEnergy;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttackDamage;
	unsigned int _rangedAttackDamage;
	int _armorDamageReduction;

	static std::mt19937 mt_rand;
	static std::string _verbs[8];
};

#endif
