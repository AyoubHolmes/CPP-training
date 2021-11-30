#include <iostream>
#include <string>
#include "Parse.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        try
        {
            std::string str = static_cast<std::string>(argv[1]);
            Parse p (str);
            p.convert();
            // std::cout << p << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "wrong number of parameters" << std::endl;
    return 0;
}
