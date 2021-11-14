#ifndef SCAVTRAOP_HPP
# define SCAVTRAOP_HPP
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
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
#endif // !SCAVTRAOP_HPP
