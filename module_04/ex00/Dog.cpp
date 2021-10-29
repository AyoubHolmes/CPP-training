#include "Dog.hpp"


Dog::Dog(/* args */)
{
    type = "Dog";
}

void        Dog::makeSound()
{
    std::cout << "Wooof!" << std::endl;
}

Dog::~Dog()
{
}