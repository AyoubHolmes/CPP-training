#include "ClapTrap.hpp"


ClapTrap::ClapTrap():hitpoints(10), energy_points(10), attack_damage(0)
{
    std::cout << "CalpTrap created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), hitpoints(10), energy_points(10), attack_damage(0)
{
    std::cout << "CalpTrap " << name << " created!" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const &c)
{
    *this = c;
    std::cout << "CalpTrap {Copy Constructor}" << name << " created!" << std::endl;

}

ClapTrap &ClapTrap::operator= (ClapTrap const &c)
{
    if (this != &c)
    {
        name = c.name;
        attack_damage = c.attack_damage;
        hitpoints = c.hitpoints;
        energy_points = c.energy_points;
    }
    return (*this);
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "CalpTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "CalpTrap " << name << " get hit and damaged " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "CalpTrap " << name << " is repaired by" << amount << " energy points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CalpTrap " << name << " is dead!" << std::endl;
}