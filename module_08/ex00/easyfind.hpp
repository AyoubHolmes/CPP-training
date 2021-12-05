#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iomanip>
#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>

template <typename T>

void easyfind(T container, int value)
{
    if (std::find(container.begin(), container.end(), value) == container.end())
        throw std::runtime_error("The value doesnt exist");
    std::cout << "value found" << std::endl;
}

#endif // !EASYFIND_HPP