#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    void        makeSound() const;
    ~Dog();
};

#endif // !DOG_H
