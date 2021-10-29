#include "FragTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap c ("C1");
	c.attack("CT1");
	c.takeDamage(20);
	c.beRepaired(20);
	FragTrap f("S1");
	f.attack("CT1");
	f.takeDamage(20);
	f.beRepaired(20);
	f.highFivesGuys();
	return 0;
}
