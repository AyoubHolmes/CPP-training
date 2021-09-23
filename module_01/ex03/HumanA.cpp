#include "HumanA.hpp"

HumanA::HumanA(Weapon W)
{
    std::cout << "Cool HumanA with his cool Weapon {" << W.getType() << "}is HERE ! X)" << std::endl;
}

HumanA::HumanA(std::string str, Weapon W)
{
    name = str;
    weapon = W;
    std::cout << "Cool HumanA {" << str << "} with his cool Weapon {" << W.getType() << "}is HERE ! X)" << std::endl;
}

Weapon HumanA::getWeapon() {
    return (weapon);
}

void HumanA::setWeapon(Weapon w)
{
    weapon = w;
}

std::string HumanA::getName() {
    return (name);
}

void HumanA::setName(std::string str)
{
    name = str;
}


void HumanA::attack()
{
    std::cout << name << " attacks with his " << W.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Cool HumanA is gone ! :( " << std::endl;
}
