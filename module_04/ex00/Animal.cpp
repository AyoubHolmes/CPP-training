#include "Animal.hpp"

Animal::Animal()
{
    type = "(none)";
    std::cout << "Animal is instantiated!" << std::endl;
}

Animal::Animal(Animal& a)
{
    *this = a;
    std::cout << "Animal { Copy Constructor } is instantiated!" << std::endl;
}

Animal& Animal::operator=(Animal const& a)
{
    if (this != &a)
        type = a.type;
    return (*this);
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
