#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <vector>
#include <iostream>
#include <iterator>
#include <deque>

template <typename T, class container = std::deque<T> >

class MutantStack: public std::stack<T, container>
{
public:
    typedef typename std::stack<T, container>::container_type::iterator iterator; 
    typedef typename std::stack<T, container>::container_type::const_iterator const_iterator; 
    typedef typename std::stack<T, container>::container_type::reverse_iterator reverse_iterator; 
    typedef typename std::stack<T, container>::container_type::const_reverse_iterator const_reverse_iterator; 

public:
    MutantStack()
    {};
    ~MutantStack()
    {};
    iterator begin()
    {
        return (this->c.begin());
    };
    
    const_iterator begin() const
    {
        return (this->c.begin());
    };

    iterator end(){
        return (this->c.end());
    };

    const_iterator end() const
    {
        return (this->c.end());
    };
    
    reverse_iterator rend(){
        return (this->c.rend());
    };

    const_reverse_iterator rend() const
    {
        return (this->c.rend());
    };

    reverse_iterator rbegin(){
        return (this->c.rbegin());
    };

    const_reverse_iterator rbegin() const
    {
        return (this->c.rbegin());
    };
    
    
};

#endif // !MUTANT_STACK_HPP