#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy {
 public:
  Enemy(int hp, std::string const &type);
  Enemy(void);
  Enemy(Enemy const &cp);
  virtual ~Enemy(void);
  Enemy &operator=(Enemy const &);

  std::string const &getType(void) const;
  int getHP(void) const;

  virtual void takeDamage(int);

 protected:
  virtual void deathMsg(void) const;

  int _HP;
  std::string const &_type;

 private:
  static std::string _dtype;
};

#endif
