#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain &);
    void            setIdea(std::string, int);
    std::string     getIdea(int);
    ~Brain();
};

#endif