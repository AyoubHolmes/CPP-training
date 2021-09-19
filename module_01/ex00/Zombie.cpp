#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name):name(name)
{}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The zombie " << this->name << " is dead (if you know what I mean XD)." << std::endl;
}

