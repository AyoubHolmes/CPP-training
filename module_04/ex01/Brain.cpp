#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain is created!" << std::endl;
}

Brain::Brain(Brain &b)
{
    for (size_t i = 0; i < ideas->length(); i++)
    {
        ideas[i] = b.ideas[i];
    }
}

void    Brain::setIdea(std::string idea, int index)
{
    ideas[index] =  idea;
}

std::string     Brain::getIdea(int index)
{
    return (ideas[index]);
}


Brain::~Brain()
{
    std::cout << "Brain is destructed!" << std::endl;
}