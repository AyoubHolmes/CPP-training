#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
    hitpoints = FragTrap::hitpoints;
    energy_points = ScavTrap::energy_points;
    attack_damage = FragTrap::attack_damage;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "This is my name: " << name << std::endl;
    std::cout << "This is my ClapTrap's name: " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
}