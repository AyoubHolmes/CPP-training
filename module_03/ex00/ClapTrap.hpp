#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>
class ClapTrap
{
private:
    /* data */
    std::string	name;
    int			hitpoints;
	int			energy_points;
	int			attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const&);
    ClapTrap &operator = (ClapTrap const &C);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    ~ClapTrap();
};


#endif // !CLAPTRAP_HPP