#include "Cat.hpp"

Cat::Cat(/* args */)
{
    type = "Cat";
    std::cout << "Cat is instantiated!" << std::endl;
}

void        Cat::makeSound() const
{
    std::cout << "< Meoww />!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat is Destroyed!" << std::endl;
}