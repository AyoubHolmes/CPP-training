#ifndef CAT_H

#define CAT_H
#include "Animal.hpp"


class Cat : public Animal
{
public:
    Cat();
    void        makeSound() const;
    ~Cat();
};


#endif // !CAT_H