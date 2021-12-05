#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <limits>
#include <exception>
#include <typeinfo>
#include "Parse.hpp"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    try {
        if (argc == 2)
        {
            std::string str = static_cast<std::string>(argv[1]);
            Parse p (str);
            p.convert();
            std::cout << p << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    /* 
    float test = 4.5f;
    char *str = "4.5";
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << strtod(str, NULL); */
    return 0;
}
