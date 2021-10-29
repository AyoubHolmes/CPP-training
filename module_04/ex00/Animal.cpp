#include "Animal.hpp"

Animal::Animal(/* args */)
{
    type = "(none)";
}

std::string Animal::getType()
{
    return type;
}

void        Animal::makeSound()
{
    std::cout << "Animal's voice!" << std::endl;
}

Animal::~Animal()
{
}
