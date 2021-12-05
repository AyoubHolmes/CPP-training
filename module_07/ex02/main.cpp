#include "Array.hpp"
#include <iostream>
#include <exception>

int main()
{
    {
        try
        {
           std::cout << "INT TEST WITH AND WITHOUT DEFAULT VALUE" << std::endl;
            Array<int> a = Array<int>();
            Array<int> b(5);
            std::cout << a[0] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() <<std::endl;
        }
    }
    {
        try
        {
            std::cout << "double TEST WITH AND WITHOUT DEFAULT VALUE" << std::endl;
            Array<double> a = Array<double>();
            Array<double> b(5);
            std::cout << b[0] << std::endl;
            b[0] = 3.5;
            std::cout << b[0] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() <<std::endl;
        }
    }
    {
        try
        {
            std::cout << "float TEST WITH AND WITHOUT DEFAULT VALUE" << std::endl;
            Array<float> a = Array<float>();
            Array<float> b(5);
            std::cout << b[0] << std::endl;
            b[0] = 3.6f;
            std::cout << b[0] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() <<std::endl;
        }
    }
    return 0;
}
