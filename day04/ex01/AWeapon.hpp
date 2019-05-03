#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon {
 public:
  AWeapon(std::string const &name, int apcost, int damage);
  AWeapon(void);
  AWeapon(AWeapon const &cp);
  virtual ~AWeapon(void);
  AWeapon &operator=(AWeapon const &);

  std::string const &getName(void) const;
  int getAPCost(void) const;
  int getDamage(void) const;
  virtual void attack() const = 0;

 protected:
  std::string const &_name;
  int _apcost;
  int _damage;

 private:
  static std::string _dname;
};

#endif
