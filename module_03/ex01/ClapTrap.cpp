#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "CalpTrap " << name << " created!" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "CalpTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "CalpTrap " << name << " get hit and damaged" << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "CalpTrap " << name << " is repaired by" << amount << " energy points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CalpTrap " << name << " is dead!" << std::endl;
}