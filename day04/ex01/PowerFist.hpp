#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
 public:
  PowerFist(void);
  PowerFist(PowerFist const& cp);
  ~PowerFist(void);
  PowerFist& operator=(PowerFist const&);

  virtual void attack() const;

 private:
  static std::string _dname;
};

#endif
