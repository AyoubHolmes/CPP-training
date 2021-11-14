#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    b = new Brain;
    std::cout << "Cat is instantiated!" << std::endl;
}

Cat::Cat(Cat &c)
{
    type = c.type;
    b = new Brain((Brain&)c.b);    
}

void        Cat::makeSound() const
{
    std::cout << "< Meoww />!" << std::endl;
}

Cat::~Cat()
{
    delete b;
    std::cout << "Cat is Destroyed!" << std::endl;
}