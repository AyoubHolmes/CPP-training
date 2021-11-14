#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
    ScavTrap::setEnergyPoint();
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    this->name = name;
    std::cout << "DiamondTrap " << name << " created!" << std::endl;
    ScavTrap::setEnergyPoint();
}

DiamondTrap::DiamondTrap(DiamondTrap &d)
{
    *this = d;
    std::cout << "DiamondTrap {Copy Constructor}" << name << " created with ClapTrap's name as "<< ClapTrap::name  << " !" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (DiamondTrap& d)
{
    if (this != &d)
    {
        name = d.name;
        ClapTrap::name = d.ClapTrap::name;
        hitpoints = d.hitpoints;
        energy_points = d.energy_points;
        attack_damage = d.attack_damage;
    }
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "This is my name: " << name << std::endl;
    std::cout << "This is my ClapTrap's name: " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is dead!" << std::endl;
}