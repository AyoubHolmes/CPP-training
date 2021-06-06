#include <iomanip>
#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
    std::string cmd;
    Phonebook pb;
    std::cout << "you should accept the ADD command, the SEARCH command or the EXIT command: " << std::endl;
    while (1)
    {
        std::cin >> cmd;
        if (cmd == "EXIT")
            break;
    }
    
    
    return 0;
}
