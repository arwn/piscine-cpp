#include "PowerFist.hpp"

std::string PowerFist::_dname = std::string("PowerFist");

PowerFist::PowerFist(void) : AWeapon(_dname, 8, 50) {}

PowerFist::PowerFist(PowerFist const& cp) { *this = cp; }
PowerFist::~PowerFist(void) {}
PowerFist& PowerFist::operator=(PowerFist const&) { return *this; }

void PowerFist::attack() const {
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
