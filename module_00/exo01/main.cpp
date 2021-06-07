#include <iomanip>
#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
    std::string cmd;
    std::cout << ">> ";
    Phonebook pb;
    while (1)
    {
        std::cin >> cmd;
        if (cmd == "EXIT")
            break;
        else if (cmd == "ADD")
            pb.addContact();
        else if (cmd == "SEARCH")
            pb.searchContact();
        std::cout << ">> ";
    }
    
    return 0;
}
