#include "RadScorpion.hpp"

std::string RadScorpion::_dtype = std::string("Rad Scorpion");

RadScorpion::RadScorpion(void) : Enemy(80, _dtype) {
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& cp) { *this = cp; }

RadScorpion::~RadScorpion(void) {}

RadScorpion& RadScorpion::operator=(RadScorpion const&) { return *this; }

void RadScorpion::takeDamage(int n) {
  if (_HP <= 0) {
    std::cout << "Enemy " << _type << " is already dead" << std::endl;
    return;
  }
  std::cout << "Enemy " << _type << " takes " << ((n < 0) ? 0 : n) << " damage"
            << std::endl;
  this->_HP -= n;
  if (this->_HP <= 0) {
    this->_HP = 0;
    std::cout << "* SPROTCH *" << std::endl;
  }
}
