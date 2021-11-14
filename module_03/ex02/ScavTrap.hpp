#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string);
    ScavTrap(ScavTrap&);
    ScavTrap &operator= (ScavTrap&);
    void attack(std::string const & target);
    void guardGate(); 
    ~ScavTrap();

};
#endif // !SCAVTRAP_HPP
