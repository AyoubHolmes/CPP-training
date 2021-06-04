#include <iomanip>
#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
    std::string i;
    std::cout << "you should accept the ADD command, the SEARCH command or the EXIT command: " << std::endl;
    while (1)
    {
        std::cin >> i;
        if (i == "EXIT")
            break;
    }
    
    
    return 0;
}
