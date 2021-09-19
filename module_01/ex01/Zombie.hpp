#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    Zombie(std::string name);
    void announce();
    void setName(std::string name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif // !ZOMBIE_H