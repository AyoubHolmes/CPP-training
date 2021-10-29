#include "DiamondTrap.hpp"

int main(int argc, char const *argv[])
{
	DiamondTrap d ("C1");
	d.attack("CT1");
	d.takeDamage(20);
	d.beRepaired(20);
	d.attack("CT1");
	d.takeDamage(20);
	d.beRepaired(20);
	d.highFivesGuys();
	d.whoAmI();
	return 0;
}
