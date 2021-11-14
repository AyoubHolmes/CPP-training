#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal &);
    std::string getType() const;
    virtual void        makeSound() const;
    ~Animal();
};

#endif // !ANIMAL_H