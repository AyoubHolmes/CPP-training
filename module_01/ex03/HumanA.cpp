#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &W) : name(str), weapon(W) {}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Cool HumanA is gone ! :( " << std::endl;
}
