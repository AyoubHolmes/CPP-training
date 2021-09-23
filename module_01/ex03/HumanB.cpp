#include "HumanB.hpp"

HumanB::HumanB()
{
    std::cout << "Cool HumanB is HERE ! X)" << std::endl;
}

HumanB::HumanB(std::string str)
{
    name = str;
    weapon = W;
    std::cout << "Cool HumanB {" << str << "} is HERE ! X)" << std::endl;
}

Weapon HumanB::getWeapon() {
    return (weapon);
}

void HumanB::setWeapon(Weapon w)
{
    weapon = w;
}

std::string HumanB::getName() {
    return (name);
}

void HumanB::setName(std::string str)
{
    name = str;
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << W.getType() << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "Cool HumanB is gone ! :( " << std::endl;
}
