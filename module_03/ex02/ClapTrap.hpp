#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>
# include <iostream>
class ClapTrap
{
protected:
    /* data */
    std::string	name;
    int			hitpoints;
	int			energy_points;
	int			attack_damage;

public:
    ClapTrap(std::string name);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    ~ClapTrap();
};


#endif // !CLAPTRAP_H