#include "HumanB.hpp"

HumanB::HumanB()
{
    weapon = NULL;
}

HumanB::HumanB(std::string str)
{
    name = str;
    weapon = NULL;
}

void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::~HumanB() {}
