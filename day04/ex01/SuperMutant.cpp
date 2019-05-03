#include "SuperMutant.hpp"

std::string SuperMutant::_dtype = std::string("Super Mutant");

SuperMutant::SuperMutant(void) : Enemy(170, _dtype) {
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& cp) { *this = cp; }

SuperMutant::~SuperMutant(void) {}

SuperMutant& SuperMutant::operator=(SuperMutant const&) { return *this; }

void SuperMutant::takeDamage(int n) {
  if (_HP <= 0) {
    std::cout << "Enemy " << _type << " is already dead" << std::endl;
    return;
  }
  std::cout << "Enemy " << _type << " takes " << ((n - 3 < 0) ? 0 : n - 3)
            << " damage" << std::endl;
  this->_HP -= n - 3;
  if (this->_HP <= 0) {
    this->_HP = 0;
    std::cout << "Aaargh ..." << std::endl;
  }
}
