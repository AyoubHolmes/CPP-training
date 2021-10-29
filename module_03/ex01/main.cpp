#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap c ("C1");
	c.attack("CT1");
	c.takeDamage(20);
	c.beRepaired(20);
	ScavTrap s ("S1");
	s.attack("CT1");
	s.takeDamage(20);
	s.beRepaired(20);
	s.guardGate();
	return 0;
}
