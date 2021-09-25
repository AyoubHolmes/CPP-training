#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"


class HumanB
{
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB();
    HumanB(std::string);
    void setWeapon(Weapon&);
    void attack();
    ~HumanB();
};
#endif // !HUMANB_H