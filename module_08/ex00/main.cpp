#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
    {
        try
        {
            std::vector<int> vec;
            for(size_t i = 0; i < 5; i++)
                vec.push_back(i);
            easyfind(vec, 2);
            easyfind(vec, 7);
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::deque<int> vec;
            for(size_t i = 0; i < 5; i++)
                vec.push_back(i);
            easyfind(vec, 2);
            easyfind(vec, 7);
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::list<int> vec;
            for(size_t i = 0; i < 5; i++)
                vec.push_back(i);
            easyfind(vec, 2);
            easyfind(vec, 7);
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}
