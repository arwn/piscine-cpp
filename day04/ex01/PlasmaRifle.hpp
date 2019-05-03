#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
 public:
  PlasmaRifle(void);
  PlasmaRifle(PlasmaRifle const& cp);
  ~PlasmaRifle(void);
  PlasmaRifle& operator=(PlasmaRifle const&);

  virtual void attack() const;

 private:
  static std::string _dname;
};

#endif
