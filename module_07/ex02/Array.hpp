#ifndef ARRAY_H
#define ARRAY_H

#include <iomanip>
#include <iostream>

template <typename T>
class Array
{
    private:
        T       *arr;
        size_t  s_len;
    public:
        Array()
        {
            arr = NULL;
        };
        Array(unsigned int len): s_len(len)
        {
            // std::cout << "test"<< std::endl;
            arr = new T[s_len];
            for (size_t i = 0; i < len; i++)
                arr[i] = T();
        };
        Array(Array const &arr)
        {
            // std::cout << "test"<< std::endl;
            *this = arr;
        };
        T const&operator= (T & a)
        {
            if (this != &a)
            {
                if (arr)
                    delete arr;
                s_len = a.s_len;
                arr = new T[s_len];
                for (size_t i = 0; i < s_len; i++)
                    arr[i] = a.arr[i];
            }
            return (*this);
        };
        T &operator[] (size_t a)
        {
            if (arr == NULL)
                throw std::out_of_range("Array is a nullptr");
            if (a >= s_len)
                throw std::out_of_range("You exceeds the array's length!");
            return (arr[a]);
        }
        size_t size()
        {
            return s_len;
        }
        ~Array(){
            if (arr)
                delete arr;
        }
};

#endif // !ARRAY_H