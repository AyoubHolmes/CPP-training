#include "Zombie.hpp"

Zombie::Zombie()
{
std::cout << "object constructed!!" << std::endl;
}

Zombie::Zombie(std::string name)/* : name_(name) */
{
    this->_name = name;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie()
{
    std::cout << "The zombie \"" << this->_name << "\" is dead (if you know what I mean XD)." << std::endl;
}

