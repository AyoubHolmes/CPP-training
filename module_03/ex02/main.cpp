#include "FragTrap.hpp"

int    main()
{
    ClapTrap    clap("F-Z");

    FragTrap    frag("Abdo");
    FragTrap    fragcpy(frag);
    FragTrap    frag1;


    std::cout << "+++++++++" << std::endl;

    frag1 = frag;
    frag1.attack("petit");
    frag1.takeDamage(10);
    frag1.beRepaired(10);
    frag1.highFivesGuys();

    std::cout << "+++++++++" << std::endl;

    frag.attack("petit");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag1.highFivesGuys();

    std::cout << "+++++++++" << std::endl;

    fragcpy.attack("petit");
    fragcpy.takeDamage(10);
    fragcpy.beRepaired(10);
    frag1.highFivesGuys();

    std::cout << "+++++++++" << std::endl;

    clap.attack("petit");
    clap.takeDamage(10);
    clap.beRepaired(10);
    
    std::cout << "+++++++++" << std::endl;
}