#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    std::string getType();
    void        makeSound();
    ~Animal();
};
