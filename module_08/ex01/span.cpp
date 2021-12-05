#include "span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    max_len = N;
}

void Span::addNumber(int val)
{
    if(vec.size() >= max_len)
        throw std::logic_error("You exceeded the limit of the vector!");
    vec.push_back(val);
}

int Span::shortestSpan()
{
    std::vector<int> tmp = vec;
    sort(tmp.begin(), tmp.end());
    return(tmp[1] - tmp[0]);
}

int Span::longestSpan()
{
    return (*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
}

Span::~Span()
{
}
