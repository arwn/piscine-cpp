#include "Character.hpp"

std::string Character::_dname = "Jim";

Character::Character(std::string const &s) : _name(s) {
  _AP = 40;
  _weapon = nullptr;
}

Character::Character(void) : _name(_dname) {
  _AP = 40;
  _weapon = nullptr;
}

Character::Character(Character const &cp) : _name(cp._name) { *this = cp; }

Character::~Character(void) {}

Character &Character::operator=(Character const &) { return *this; }

void Character::attack(Enemy *e) {
  if (_weapon == nullptr)
    std::cout << "No weapon equipped" << std::endl;
  else if (_AP - _weapon->getAPCost() >= 0) {
    std::cout << _name << " attacks " << e->getType() << " with a "
              << _weapon->getName() << std::endl;
    _weapon->attack();
    e->takeDamage(_weapon->getDamage());
    if (e->getHP() <= 0) delete e;
    _AP -= _weapon->getAPCost();
  } else
    std::cout << "Not enough AP" << std::endl;
}

void Character::equip(AWeapon *w) { this->_weapon = w; }

void Character::recoverAP(void) { this->_AP += 10; }

std::string const &Character::getName(void) const { return (this->_name); }

int Character::getAP(void) const { return (this->_AP); }

AWeapon const *Character::getWeapon(void) const { return (this->_weapon); }

std::ostream &operator<<(std::ostream &o, Character const &f) {
  o << f.getName() << " has " << f.getAP() << " AP and ";
  if (f.getWeapon() == nullptr)
    o << "is unarmed" << std::endl;
  else
    o << "wields " << f.getWeapon()->getName() << std::endl;
  return (o);
}
