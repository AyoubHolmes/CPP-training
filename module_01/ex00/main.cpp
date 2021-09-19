#include "Zombie.hpp"

int main(void)
{
    Zombie *z;

    z = newZombie("Yoo");
    z->announce();
    delete z;
    randomChump("Yoo 2");
    return 0;
}