#include <iomanip>
#include <iostream>
#include "Phonebook.hpp"

int main(void)
{
    std::string cmd;
    std::cout << "\x1B[35m{ ADD | SEARCH | EXIT } >> \x1B[37m";
    Phonebook pb;
    while (1)
    {
        cmd = ft_check_line(cmd);
        if (!std::cin)
            break ;
        if (cmd == "EXIT")
            break;
        else if (cmd == "ADD")
            pb.addContact();
        else if (cmd == "SEARCH")
            pb.searchContact();
        else
            std::cout << "\x1B[31m{ Command is wrong }\x1B[37m" << std::endl;
        std::cout << "\x1B[35m{ ADD | SEARCH | EXIT } >> \x1B[37m";
    }
    return 0;
}
