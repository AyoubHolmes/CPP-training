#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string, Weapon&);
    // std::string getName();
    // void setName(std::string);
    // Weapon getWeapon();
    // void setWeapon(Weapon&);
    void attack();
    ~HumanA();
};

#endif // !HUMANA_H