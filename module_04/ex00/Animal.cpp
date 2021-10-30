#include "Animal.hpp"

Animal::Animal()
{
    type = "(none)";
    std::cout << "Animal is instantiated!" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void        Animal::makeSound() const
{
    std::cout << "< Animal's voice />!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal is Destroyed!" << std::endl;
}
