#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>
#include <iterator>

class Span
{
private:
    std::vector<int> vec;
    int len;
    int max_len;
public:
    Span();
    Span(unsigned int);
    void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
    ~Span();
};

#endif // !SPAN_HPP
