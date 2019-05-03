#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

class Character {
 public:
  Character(std::string const &);
  Character(void);
  Character(Character const &cp);
  ~Character(void);
  Character &operator=(Character const &);

  void recoverAP(void);
  void equip(AWeapon *);
  void attack(Enemy *);

  std::string const &getName(void) const;
  int getAP(void) const;
  AWeapon const *getWeapon(void) const;

 private:
  std::string const &_name;
  int _AP;
  AWeapon *_weapon;

  static std::string _dname;
};

std::ostream &operator<<(std::ostream &o, Character const &f);

#endif
