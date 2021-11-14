#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    hitpoints = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitpoints = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& S) {
    *this = S;
    std::cout << "ScavTrap {Copy Constructor} " << name << " created!" << std::endl;
}

ScavTrap &ScavTrap::operator= (ScavTrap& S)
{
    if (this != &S)
    {
        name = S.name;
        hitpoints = S.hitpoints;
        energy_points = S.energy_points;
        attack_damage = S.attack_damage;
    }
    return (*this);
}

void ScavTrap::attack(std::string const & target) {
    std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has enterred in Gate Keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " is dead!" << std::endl;
}

