#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitpoints = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has enterred in Gate Keeper mode!";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " is dead!" << std::endl;
}

