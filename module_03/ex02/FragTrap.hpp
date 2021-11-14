#ifndef FRAGTROAP_HPP
# define FRAGTROAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string);
    FragTrap(FragTrap&);
    FragTrap& operator= (FragTrap&);
    void highFivesGuys(void);
    ~FragTrap();
};

#endif // !FRAGTROAP_HPP