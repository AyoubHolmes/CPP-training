#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog is instantiated!" << std::endl;
}

void        Dog::makeSound() const
{
    std::cout << "< Wooof />!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog is Destroyed!" << std::endl;
}