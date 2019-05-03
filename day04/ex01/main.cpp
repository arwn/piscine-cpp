#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main() {
  Character* zaz = new Character("zaz");
  std::cout << *zaz;
  Enemy* b = new RadScorpion();
  Enemy* c = new SuperMutant();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->equip(pf);
  zaz->attack(b);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;

  zaz->equip(pr);
  std::cout << *zaz;
  zaz->equip(pf);
  zaz->attack(c);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(c);
  std::cout << *zaz;
  zaz->attack(c);
  std::cout << *zaz;
  zaz->attack(c);
  std::cout << *zaz;
  zaz->recoverAP();
  zaz->attack(c);
  std::cout << *zaz;
  return 0;
}
