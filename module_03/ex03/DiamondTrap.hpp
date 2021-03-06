#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap&);
    DiamondTrap &operator= (DiamondTrap&);
    void whoAmI();
    using ClapTrap::attack;
    ~DiamondTrap();
};