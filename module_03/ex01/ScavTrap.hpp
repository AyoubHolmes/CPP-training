#ifndef SCAVTRAOP_H
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string);
    void guardGate(); 
    ~ScavTrap();

};
#endif // !SCAVTRAOP_H
