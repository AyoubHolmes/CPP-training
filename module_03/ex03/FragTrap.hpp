#ifndef FRAGTROAP_HPP
# define FRAGTROAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(FragTrap&);
    FragTrap& operator= (FragTrap&);
    void setHitPoint();
    void highFivesGuys(void);
    void setAttackDamage();
    ~FragTrap();
};

#endif // !FRAGTROAP_HPP