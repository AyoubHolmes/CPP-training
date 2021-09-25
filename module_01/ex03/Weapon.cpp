#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
    // std::cout << "Cool Weapon is HERE ! X)" << std::endl;
}

Weapon::Weapon(std::string str) : type(str) {}

const std::string&  Weapon::getType()
{
    return (/* (const std::string&)this-> */type);
}

void  Weapon::setType(std::string str)
{
    type = str;
}

Weapon::~Weapon()
{
    // std::cout << "Cool Weapon is gone ! :( " << std::endl;
}
