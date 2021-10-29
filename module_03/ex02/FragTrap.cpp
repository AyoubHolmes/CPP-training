#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitpoints = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << " Yoo cool guys, HIGH FIVE!!" << std::endl;
} 

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " is dead!" << std::endl;
}