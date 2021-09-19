#include "Zombie.hpp"

int main(void)
{
    Zombie *z;
    
    z = zombieHorde(3, "I, alone, can do everything!");
    
    for (size_t i = 0; i < 3; i++)
    {
        z[i].announce();
    }
    
    delete [] z;
    std::cout << "The job is done" << std::endl;
    return 0;
}
