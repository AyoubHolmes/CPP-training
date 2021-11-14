#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *b;
public:
    Dog();
    Dog(Dog &);
    void        makeSound() const;
    ~Dog();
};

#endif // !DOG_H
