#ifndef CAT_H

#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
    Brain *b;
public:
    Cat();
    Cat(Cat &);
    void        makeSound() const;
    ~Cat();
};


#endif // !CAT_H