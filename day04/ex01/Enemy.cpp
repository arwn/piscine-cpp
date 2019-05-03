#include "Enemy.hpp"

std::string Enemy::_dtype = std::string("goblin");

Enemy::Enemy(int hp, std::string const &type) : _HP(hp), _type(type) {}

Enemy::Enemy(void) : _HP(10), _type(_dtype) {}
Enemy::Enemy(Enemy const &cp) : _type(cp._type) { *this = cp; }
Enemy::~Enemy(void) {}
Enemy &Enemy::operator=(Enemy const &) { return *this; }

std::string const &Enemy::getType(void) const { return (_type); }

int Enemy::getHP(void) const { return (_HP); }

void Enemy::deathMsg(void) const {
  std::cout << "Enemy " << _type << " is dead" << std::endl;
}

void Enemy::takeDamage(int n) {
  if (_HP <= 0) {
    std::cout << "Enemy " << _type << " is already dead" << std::endl;
    return;
  }
  std::cout << "Enemy " << _type << " takes " << n << " damage" << std::endl;
  this->_HP -= n;
  if (this->_HP <= 0) {
    this->_HP = 0;
    deathMsg();
  }
}
