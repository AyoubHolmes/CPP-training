#include "ScavTrap.hpp"

int    main()
{
    ScavTrap    trap("liFan");

    ScavTrap    scav2(trap);

    ClapTrap    clap("F-Z");

    ScavTrap    scav;

    std::cout << "++++++++++++" << std::endl;

    scav = trap;
    scav.attack("petit");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "++++++++++++" << std::endl;

    scav2.attack("petit");
    scav2.takeDamage(10);
    scav2.beRepaired(10);
    scav2.guardGate();

    std::cout << "++++++++++++" << std::endl;

    clap.attack("petit");
    clap.takeDamage(10);
    clap.beRepaired(10);

    std::cout << "++++++++++++" << std::endl;
    
    trap.attack("petit");
    trap.takeDamage(10);
    trap.beRepaired(10);
    trap.guardGate();

    std::cout << "++++++++++++" << std::endl;
}