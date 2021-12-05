#include "iter.hpp"
#include <iomanip>
#include <iostream>

void func(int const &x)
{
    std::cout << x * 2 << std::endl;
}

void func(double const &x)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2) <<  x * 3 << std::endl;
}


void func(float const &x)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << x * 4 << std::endl;
}


int main()
{
    {
        std::cout << "INT TEST" << std::endl;
        int *arr = new int[10];
        for (size_t i = 0; i < 10; i++)
            arr[i] = i;
        iter(arr, 10, func);
    }
    {
        std::cout << "DOUBLE TEST" << std::endl;
        double *arr = new double[10];
        for (size_t i = 0; i < 10; i++)
            arr[i] = i;
        iter(arr, 10, func);
    }
    {
        std::cout << "FLOAT TEST" << std::endl;
        float *arr = new float[10];
        for (size_t i = 0; i < 10; i++)
            arr[i] = i;
        iter(arr, 10, func);
    }
    return 0;
}
