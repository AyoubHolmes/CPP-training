#include "DiamondTrap.hpp"

int    main()
{
    DiamondTrap d_trap;
    std::cout << std::endl;
    DiamondTrap d_trap1("flana");
    std::cout << std::endl;
    DiamondTrap d_trap2(d_trap1);
    std::cout << "++++++++++" << std::endl;
    std::cout << std::endl;

    d_trap = d_trap2;
    std::cout << std::endl;

    d_trap.attack("flan");
    std::cout << std::endl;
    d_trap.guardGate();
    std::cout << "++++++++++" << std::endl;
    std::cout << std::endl;
    d_trap.whoAmI();
    std::cout << std::endl;
    std::cout << "++++++++++" << std::endl;
}