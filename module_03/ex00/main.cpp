#include "ClapTrap.hpp"

int    main()
{
    ClapTrap    clap;
    ClapTrap    trap("ayoub");
    ClapTrap    trapcpy(trap);

    clap = ClapTrap("ABDO");
    trap.attack("ABDO");
    clap.takeDamage(10);
    clap.attack("ayoub");
    trap.takeDamage(10);
    clap.beRepaired(10);
    trap.beRepaired(10);
    trapcpy.beRepaired(10);
}