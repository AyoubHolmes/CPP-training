#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

const std::string&  Weapon::getType()
{
    return ((const std::string&)this->type);
}

void  Weapon::setType(std::string str)
{
    this->type = str;
}

Weapon::~Weapon()
{
}
