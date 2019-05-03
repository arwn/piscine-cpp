#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <random>

class ClapTrap {
  protected:
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
  public:
	ClapTrap(std::string);
	ClapTrap(void);
	ClapTrap(ClapTrap const & cp);
	~ClapTrap(void);
	ClapTrap& operator=(const ClapTrap &ah);

	void meleeAttack(std::string const &target) const;
	void rangedAttack(std::string const &target) const;
	unsigned int takeDamage(unsigned int amount);
	unsigned int beRepaired(unsigned int amount);

	const std::string &getName(void) const;
	int getHealth(void) const;
	int getMaxHealth(void) const;
	int getEnergy(void) const;
	int getMaxEnergy(void) const;
	int getLevel(void) const;
	int getMeleeAttackDamage(void) const;
	int getRangedAttackDamage(void) const;
	int getArmor(void) const;
};

#endif // !CLAPTRAP_HPP
