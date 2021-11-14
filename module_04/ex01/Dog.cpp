#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    b = new Brain;
    std::cout << "Dog is instantiated!" << std::endl;
}

Dog::Dog(Dog &d)
{
    type = d.type;
    b = new Brain((Brain&)d.b); 
}

void        Dog::makeSound() const
{
    std::cout << "< Wooof />!" << std::endl;
}

Dog::~Dog()
{
    delete b;
    std::cout << "Dog is Destroyed!" << std::endl;
}