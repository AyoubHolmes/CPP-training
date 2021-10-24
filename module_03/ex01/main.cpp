#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap c ("C1");
	c.attack("CT1");
	c.takeDamage(20);
	c.beRepaired(20);
	return 0;
}
