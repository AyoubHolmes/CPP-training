#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    hitpoints = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitpoints = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap& F)
{
    *this = F;
    std::cout << "FragTrap " << name << " created!" << std::endl;

}

FragTrap& FragTrap::operator= (FragTrap& F)
{
    if (this != &F)
    {
        name = F.name;
        hitpoints = F.hitpoints;
        energy_points = F.energy_points;
        attack_damage = F.attack_damage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << " Yoo cool guys, HIGH FIVE!!" << std::endl;
} 

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is dead!" << std::endl;
}