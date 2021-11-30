#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <limits>
#include <typeinfo>


int main(int argc, char *argv[])
{
    char    c;
    int     n;
    float   f;
    double  d;

    if (argc == 2)
    {
        std::string str = static_cast<std::string>(argv[1]);
        if (((str[0] >= 0 && str[0] <= 127)))
        {
            if (((str[0] >= '0' && str[0] <= '9') || str[0] == '+' || str[0] == '-') && str.length() >= 1)
            {
                if (str.find("f") != std::string::npos)
                {
                    f = std::stof(str);
                    c = static_cast<char>(f);
                    n = static_cast<int>(f);
                    d = static_cast<double>(f);
                    std::cout << "char: " << c <<  std::endl;
                    std::cout << "int: " << n <<  std::endl;
                    std::cout << std::fixed;
                    std::cout << "float: "<< std::setprecision(2) << f << "f" <<  std::endl;
                    std::cout << "double: " << d <<  std::endl;
                }
                else if (str.find(".") != std::string::npos)
                {
                    d = std::stod(str);
                    c = static_cast<char>(d);
                    n = static_cast<int>(d);
                    f = static_cast<float>(d);
                    std::cout << "char: " << c <<  std::endl;
                    std::cout << "int: " << n <<  std::endl;
                    std::cout << std::fixed;
                    std::cout << "float: "<< std::setprecision(2) << f << "f" <<  std::endl;
                    std::cout << "double: " << d <<  std::endl;
                }
                else
                {
                    n = std::stoi(str);
                    c = static_cast<char>(n);
                    f = static_cast<float>(n);
                    d = static_cast<double>(n);
                    std::cout << "char: " << c <<  std::endl;
                    std::cout << "int: " << n <<  std::endl;
                    std::cout << std::fixed;
                    std::cout << "float: "<< std::setprecision(2) << f << "f" <<  std::endl;
                    std::cout << "double: " << d <<  std::endl;
                }
            }
            else if (str.length() == 1)
            {
                c = str[0];
                n = static_cast<int>(c);
                f = static_cast<float>(n);
                d = static_cast<double>(n);
                std::cout << "char: " << c <<  std::endl;
                std::cout << "int: " << n <<  std::endl;
                std::cout << std::fixed;
                std::cout << "float: "<< std::setprecision(2) << f << "f" <<  std::endl;
                std::cout << "double: " << d <<  std::endl;
            }
        }
    }
    else
        std::cout << "wrong number of parameters" << std::endl;
    return 0;
}
